/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, ABStyleProvider, ABUIPerson;

@interface ABContactListPhotoView : UIView {

	UIImageView* _contactImageView;
	ABStyleProvider* _styleProvider;
	ABUIPerson* _person;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABUIPerson * person;                          //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) void* record; 
-(id)_framedPhoto;
-(id)initWithFrame:(CGRect)arg1 UIStyle:(int)arg2 ;
-(ABStyleProvider *)styleProvider;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
-(void*)record;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPerson:(ABUIPerson *)arg1 ;
-(ABUIPerson *)person;
-(void)setRecord:(void*)arg1 ;
@end

