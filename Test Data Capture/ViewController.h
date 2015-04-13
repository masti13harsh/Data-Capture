//
//  ViewController.h
//  Test Data Capture
//
//  Created by Harsh Sapra on 12/04/15.
//  Copyright (c) 2015 Harsh Sapra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <NSURLConnectionDataDelegate>
{
    NSMutableData *_responseData;
}
- (IBAction)checkButtonPressed:(UIButton *)sender;

@property (strong, nonatomic) IBOutlet UILabel *amountLeftLabel;
@property (strong, nonatomic) NSString *responseString;

@end

