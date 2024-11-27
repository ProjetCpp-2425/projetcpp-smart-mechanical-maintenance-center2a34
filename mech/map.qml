
import QtQuick 2.15
import QtPositioning 5.15
import QtLocation 5.15
import QtQuick.Controls 2.15

Rectangle {
    id: root
    width: 800
    height: 600
    color: "white"

    // Définitions des propriétés zoom globales
    property real zoomMin: 1
    property real zoomMax: 20

    Map {
        id: map
        anchors.fill: parent
        plugin: Plugin {
            name: "osm"
            parameters: [
                PluginParameter { name: "osm.mapping.providersrepository.address"; value: "http://a.tile.openstreetmap.org" },
                PluginParameter { name: "osm.mapping.providersrepository.disabled"; value: true }
            ]
        }
        center: QtPositioning.coordinate(36.8, 10.1) // Centré sur Tunis
        zoomLevel: 7

        // Liste des localisations avec leurs coordonnées et étiquettes
        property var locations: [
            { name: "Tunis", coordinate: QtPositioning.coordinate(36.8, 10.1) },
            { name: "Jendouba", coordinate: QtPositioning.coordinate(36.5011, 8.7802) },
            { name: "Monastir", coordinate: QtPositioning.coordinate(35.7771, 10.8262) },
            { name: "Bizerte", coordinate: QtPositioning.coordinate(37.2746, 9.8739) }
        ]

        // Ajout des marqueurs pour chaque localisation
        Repeater {
            model: map.locations
            MapQuickItem {
                coordinate: model.coordinate
                anchorPoint: Qt.point(12, 12) // Centre l'image sur le marqueur
                sourceItem: Item {
                    width: 24
                    height: 24
                    Image {
                        source: "file:///C:/Users/21658/Desktop/projet2024-2025/mech/marker.png"
                        anchors.fill: parent
                    }
                    MouseArea {
                        anchors.fill: parent
                        onClicked: console.log("Clicked on:", model.name)
                    }
                }
            }
        }

        // Tooltip spécifique pour Tunis
        Item {
            id: tooltip
            visible: false
            width: 120
            height: 40
            x: map.toScreenCoordinates(QtPositioning.coordinate(36.8, 10.1)).x - width / 2
            y: map.toScreenCoordinates(QtPositioning.coordinate(36.8, 10.1)).y - 50
            Rectangle {
                anchors.fill: parent
                radius: 8
                color: "black"
                opacity: 0.8
                Text {
                    anchors.centerIn: parent
                    text: "Tunis"
                    color: "white"
                    font.bold: true
                }
            }

            // Mise à jour de la position lors du déplacement de la carte
            Connections {
                target: map
                function onCenterChanged() {
                    tooltip.x = map.toScreenCoordinates(QtPositioning.coordinate(36.8, 10.1)).x - tooltip.width / 2;
                    tooltip.y = map.toScreenCoordinates(QtPositioning.coordinate(36.8, 10.1)).y - 50;
                }
            }
        }

        // MouseArea pour afficher/masquer le tooltip
        MapQuickItem {
            coordinate: QtPositioning.coordinate(36.8, 10.1)
            anchorPoint: Qt.point(12, 12)
            sourceItem: Item {
                width: 24
                height: 24
                Image {
                    source: "file:///C:/Users/21658/Desktop/projet2024-2025/mech/marker.png"
                    anchors.fill: parent
                }
                MouseArea {
                    anchors.fill: parent
                    onEntered: tooltip.visible = true
                    onExited: tooltip.visible = false
                }
            }
        }

        // Fonctionnalités interactives
        TapHandler {
            onTapped: {
                console.log("Carte tapée à :", map.toCoordinate(point.position))
            }
        }
    }

    // Barre de défilement pour interagir avec le zoom
    ScrollBar {
        id: zoomBar
        orientation: Qt.Vertical
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: 20
        active: true

        // La position varie entre 0 et 1
        position: (map.zoomLevel - zoomMin) / (zoomMax - zoomMin)

        // Mettre à jour la carte lors des changements de position
        onPositionChanged: {
            map.zoomLevel = zoomMin + position * (zoomMax - zoomMin);
        }

        // Synchroniser la position lors des changements de zoom
        Connections {
            target: map
            function onZoomLevelChanged() {
                zoomBar.position = (map.zoomLevel - zoomMin) / (zoomMax - zoomMin);
            }
        }
    }
}
