//
//  ViewController.h
//  Fraction_Calculator
//
//  Created by MF839-013 on 2016. 5. 27..
//  Copyright © 2016년 SDS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *display;

- (IBAction)clickPlus:(id)sender;
- (IBAction)clickMinus:(id)sender;
- (IBAction)clickMultiply:(id)sender;
- (IBAction)clickDivide:(id)sender;

- (IBAction)clickEquals:(id)sender;
- (IBAction)clickOver:(id)sender;
- (IBAction)clickClear:(id)sender;

- (IBAction)clickDigit:(id)sender;

- (void) processDigit:(int)digit;
- (void) processOp:(char)theOp;
- (void) storeFracPart;

@end

