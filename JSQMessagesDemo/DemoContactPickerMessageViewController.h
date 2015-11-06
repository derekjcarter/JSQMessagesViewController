//
//  DemoContactPickerMessageViewController.h
//  JSQMessages
//
//  Created by Derek Carter on 8/6/15.
//  Copyright (c) 2015 Hexed Bits. All rights reserved.
//

// Import all the things
#import "JSQMessages.h"

#import "DemoModelData.h"
#import "NSUserDefaults+DemoSettings.h"
#import "THContactPickerView.h"


@class DemoContactPickerMessageViewController;

@protocol DemoContactPickerMessageViewControllerDelegate <NSObject>

- (void)didDismissJSQDemoViewController:(DemoContactPickerMessageViewController *)vc;

@end




@interface DemoContactPickerMessageViewController : JSQMessagesViewController <UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, THContactPickerDelegate>

@property (weak, nonatomic) id<DemoContactPickerMessageViewControllerDelegate> delegateModal;

@property (strong, nonatomic) DemoModelData *demoData;

- (void)receiveMessagePressed:(UIBarButtonItem *)sender;

@end
