/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <libobjc.A.dylib/VimeoComposeOptionViewDelegate.h>

@class VimeoUploadSession, UIImageView, SLComposeSheetConfigurationItem, VimeoDetailsController, ACAccountStore, ACAccount, NSString, NSArray;

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate> {

	VimeoUploadSession* _session;
	UIImageView* _logoView;
	SLComposeSheetConfigurationItem* _detailsConfigurationItem;
	VimeoDetailsController* _detailsController;
	ACAccountStore* _accountStore;
	ACAccount* _vimeoAccount;
	NSString* _postDescription;
	NSArray* _tags;
	long long _videoSize;
	long long _privacySettings;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * vimeoAccount;                   //@synthesize vimeoAccount=_vimeoAccount - In the implementation block
@property (nonatomic,retain) NSString * postDescription;                 //@synthesize postDescription=_postDescription - In the implementation block
@property (nonatomic,retain) NSArray * tags;                             //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) long long videoSize;                        //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) long long privacySettings;                  //@synthesize privacySettings=_privacySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(long long)videoSize;
-(void)setVideoSize:(long long)arg1 ;
-(long long)privacySettings;
-(void)setPrivacySettings:(long long)arg1 ;
-(void)didSelectPost;
-(id)configurationItems;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)tags;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setTags:(NSArray *)arg1 ;
-(NSString *)postDescription;
-(void)setVimeoAccount:(ACAccount *)arg1 ;
-(void)setPostDescription:(NSString *)arg1 ;
-(ACAccount *)vimeoAccount;
-(void)vimeoComposeOptionsViewDidFinish:(id)arg1 ;
-(BOOL)validateText:(id)arg1 ;
@end

