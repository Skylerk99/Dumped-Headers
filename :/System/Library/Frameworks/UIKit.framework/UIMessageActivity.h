/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity {

	BOOL _sourceIsManaged;
	MFMessageComposeViewController* _messageComposeViewController;

}

@property (assign,nonatomic) BOOL sourceIsManaged;                                                       //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) MFMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
+(long long)activityCategory;
-(void)dealloc;
-(id)activityType;
-(void)_cleanup;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(BOOL)sourceIsManaged;
-(id)activityViewController;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setMessageComposeViewController:(MFMessageComposeViewController *)arg1 ;
-(MFMessageComposeViewController *)messageComposeViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end

