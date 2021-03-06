/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPostalAddress;

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
+(id)emptyValueForLabel:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(BOOL)_isMinimalAddress:(id)arg1 ;
-(CNPostalAddress *)address;
@end

