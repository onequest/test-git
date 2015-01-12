//
//  DetailViewController.h
//  Duet
//
//  Created by Olga Vanieva on 12/01/2015.
//  Copyright (c) 2015 DeCarlis Wilson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

