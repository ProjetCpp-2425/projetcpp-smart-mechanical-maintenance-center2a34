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
                sourceItem: Image {
                    source: "file:///C:/Users/21658/Desktop/projet2024-2025/mech/marker.png"
                    width: 24
                    height: 24
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
