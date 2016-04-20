/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class CNContact;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(void)_setRecord:(void*)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
@end

