/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

@interface CNMultiValueSingleUpdate : CNMultiValueUpdate {

	CNLabeledValue* _value;

}

@property (nonatomic,readonly) CNLabeledValue * value;              //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(id)description;
-(CNLabeledValue *)value;
-(id)initWithValue:(id)arg1 ;
@end

