/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addType:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)types;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
-(BOOL)isPrimary;
-(id)grouping;
-(void)finalize;
-(void)setGrouping:(id)arg1 ;
@end

