//
//  MUS147ViewController.h
//  Music147_2013
//
//  Created by Kojiro Umezaki on 4/5/13.
//  Copyright (c) 2013 Kojiro Umezaki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MUS147ViewController : UIViewController{
    IBOutlet UISlider* freqSlider;
    IBOutlet UISlider* ampSlider;
}

-(IBAction)setFreq:(id)sender;

-(IBAction)setAmp:(id)sender;

@end
