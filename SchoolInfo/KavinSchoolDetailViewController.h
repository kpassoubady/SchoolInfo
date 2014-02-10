//
//  KavinSchoolDetailViewController.h
//  SchoolInfo
//
//  Created by Kangeyan Passoubady on 2/9/14.
//  Copyright (c) 2014 Kangeyan Passoubady. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KavinSchoolDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
