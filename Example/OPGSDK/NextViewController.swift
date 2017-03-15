//
//  NextViewController.swift
//  OPGSDK
//
//  Created by Chinthan on 08/03/17.
//  Copyright © 2017 CocoaPods. All rights reserved.
//

import UIKit
//import OPGFramework

class NextViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
//        self.surveyDelegate = self;
//
//        self.loadSurvey("NewOnline")
        
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func didSurveyStartLoad() {
        print("didSurveyStartLoad")
    }
    
    func didSurveyFinishLoad() {
        print("didSurveyFinishLoad")

    }
    
    func didSurveyCompleted() {
        print("didSurveyCompleted")

    }
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
