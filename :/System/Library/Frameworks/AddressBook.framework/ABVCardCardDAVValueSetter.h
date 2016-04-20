/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {

	BOOL _recordIsGroup;
	BOOL _importingToExistingGroup;

}

@property (assign) BOOL recordIsGroup;              //@synthesize recordIsGroup=_recordIsGroup - In the implementation block
+(CFDictionaryRef)_personToGroupPropertyMap;
+(int)groupPropertyForPersonProperty:(int)arg1 ;
-(BOOL)propertyIsValidForPerson:(unsigned)arg1 ;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setRecordIsGroup:(BOOL)arg1 ;
-(id)initWithPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(id)initWithGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(void)_drainExistingProperties;
-(BOOL)recordIsGroup;
-(id)imageData;
-(void*)valueForProperty:(unsigned)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
@end

