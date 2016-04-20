/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol AAUIConfirmIdentityViewControllerDelegate;
@class ACAccount, UIScrollView, UIView, UILabel, UIButton, AAUIProfilePictureStore, UIImage, NSValue, UIImagePickerController, NSString;

@interface AAUIConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate> {

	ACAccount* _account;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _profilePhotoView;
	UILabel* _nameLabel;
	UILabel* _emailLabel;
	UIButton* _continueButton;
	UIButton* _useDifferentIDButton;
	AAUIProfilePictureStore* _profilePictureStore;
	UIImage* _newProfilePicture;
	NSValue* _newProfilePictureCropRect;
	UIImagePickerController* _imagePicker;
	id<AAUIConfirmIdentityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIConfirmIdentityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AAUIConfirmIdentityViewControllerDelegate>)arg1 ;
-(id<AAUIConfirmIdentityViewControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)pageTitle;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)_photoWasTapped:(id)arg1 ;
-(void)_addPhotoButtonWasTapped:(id)arg1 ;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(void)_useDifferentIDButtonWasTapped:(id)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(void)_showImagePickerForAvailableSources;
-(BOOL)shouldShowInviteeInstructions;
-(void)_updateViewsInPhotoArea:(id)arg1 ;
-(id)instructions;
-(void)_showImageSourcePicker;
-(void)_presentImagePickerWithSourceType:(long long)arg1 ;
@end

