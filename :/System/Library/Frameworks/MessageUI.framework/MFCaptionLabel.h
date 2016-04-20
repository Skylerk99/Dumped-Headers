/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UILabel, UIButton, NSString, UIFont;

@interface MFCaptionLabel : UIView {

	BOOL _needsLabelUpdate;
	void* _addressBook;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	UILabel* _recipientLabel;
	UIButton* _moreButton;

}

@property (assign,nonatomic) void* addressBook;                       //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) NSArray * toRecipients;                  //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,retain) NSArray * ccRecipients;                  //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * bccRecipients;                 //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) UILabel * recipientLabel;              //@synthesize recipientLabel=_recipientLabel - In the implementation block
@property (nonatomic,readonly) UIButton * moreButton;                 //@synthesize moreButton=_moreButton - In the implementation block
+(id)_propertiesThatNeedLabelUpdates;
+(id)defaultFont;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(NSArray *)bccRecipients;
-(id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1 ;
-(void)_setNeedsLabelUpdate;
-(UILabel *)recipientLabel;
-(UIButton *)moreButton;
-(void)setToRecipients:(NSArray *)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(id)viewForBaselineLayout;
-(void)_updateLabel;
-(UIFont *)font;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGPoint)baselinePoint;
-(void)clear;
-(void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 ;
@end

