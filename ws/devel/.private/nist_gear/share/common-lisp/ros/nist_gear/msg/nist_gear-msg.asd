
(cl:in-package :asdf)

(defsystem "nist_gear-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ConveyorBeltState" :depends-on ("_package_ConveyorBeltState"))
    (:file "_package_ConveyorBeltState" :depends-on ("_package"))
    (:file "DetectedProduct" :depends-on ("_package_DetectedProduct"))
    (:file "_package_DetectedProduct" :depends-on ("_package"))
    (:file "DetectedShipment" :depends-on ("_package_DetectedShipment"))
    (:file "_package_DetectedShipment" :depends-on ("_package"))
    (:file "LogicalCameraImage" :depends-on ("_package_LogicalCameraImage"))
    (:file "_package_LogicalCameraImage" :depends-on ("_package"))
    (:file "Model" :depends-on ("_package_Model"))
    (:file "_package_Model" :depends-on ("_package"))
    (:file "Order" :depends-on ("_package_Order"))
    (:file "_package_Order" :depends-on ("_package"))
    (:file "PopulationState" :depends-on ("_package_PopulationState"))
    (:file "_package_PopulationState" :depends-on ("_package"))
    (:file "Product" :depends-on ("_package_Product"))
    (:file "_package_Product" :depends-on ("_package"))
    (:file "Proximity" :depends-on ("_package_Proximity"))
    (:file "_package_Proximity" :depends-on ("_package"))
    (:file "Shipment" :depends-on ("_package_Shipment"))
    (:file "_package_Shipment" :depends-on ("_package"))
    (:file "ShippingBox" :depends-on ("_package_ShippingBox"))
    (:file "_package_ShippingBox" :depends-on ("_package"))
    (:file "StorageUnit" :depends-on ("_package_StorageUnit"))
    (:file "_package_StorageUnit" :depends-on ("_package"))
    (:file "TrayContents" :depends-on ("_package_TrayContents"))
    (:file "_package_TrayContents" :depends-on ("_package"))
    (:file "VacuumGripperState" :depends-on ("_package_VacuumGripperState"))
    (:file "_package_VacuumGripperState" :depends-on ("_package"))
  ))