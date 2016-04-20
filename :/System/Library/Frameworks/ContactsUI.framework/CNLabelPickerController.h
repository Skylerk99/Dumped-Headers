/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPickerController.h>

@class CNPropertyGroupItem;

@interface CNLabelPickerController : CNPickerController {

	CNPropertyGroupItem* _item;

}

@property (nonatomic,__weak,readonly) CNPropertyGroupItem * item;              //@synthesize item=_item - In the implementation block
-(id)titleForPickerItem:(id)arg1 ;
-(id)initForPropertyItem:(id)arg1 ;
-(void)removeCustomItem:(id)arg1 ;
-(CNPropertyGroupItem *)item;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

