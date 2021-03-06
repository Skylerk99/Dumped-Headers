/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIUserDictionaryEntry.h>

@class NSString, NSNumber;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSNumber* _timestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * phrase;                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                     //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)valueWithEntry:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)phrase;
-(BOOL)matchesEntry:(id)arg1 ;
-(id)shortcutForSorting;
-(void)setPhrase:(NSString *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
@end

