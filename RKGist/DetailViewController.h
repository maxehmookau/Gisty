//
//  DetailViewController.h
//  RKGist
//
//  Created by Max Woolf on 07/05/2013.
//  Copyright (c) 2013 Max Woolf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
