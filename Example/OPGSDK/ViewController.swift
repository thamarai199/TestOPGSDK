//
//  ViewController.swift
//  OPGSDK
//
//  Created by thamarai199@outlook.com on 03/06/2017.
//  Copyright (c) 2017 thamarai199@outlook.com. All rights reserved.
//

import UIKit
import OPGFramework

class ViewController: UIViewController {
    
    func authenticate()
    {
        let sdk = OPGSDK()
        var authenticate:OPGAuthenticate
        do {
            authenticate = try sdk.authenticate("Chinthan", password: "dev") as OPGAuthenticate
            
            if (authenticate.isSuccess == 1)
            {
                //self.performSegue(withIdentifier: "SurveyHome", sender: self);
            } else {
                
            }
        } catch let err as NSError {
            print("Error: \(err)")
        }
        
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        
        
        // Do any additional setup after loading the view, typically from a nib.
        self.authenticate()

        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

