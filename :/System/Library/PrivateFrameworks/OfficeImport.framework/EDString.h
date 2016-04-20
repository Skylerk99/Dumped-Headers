/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class NSString, EDRunsCollection, EDPhoneticInfo;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {

	NSString* mString;
	EDRunsCollection* mRuns;
	EDPhoneticInfo* mPhoneticInfo;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)string;
+(id)edStringWithString:(id)arg1 ;
+(id)edStringWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEmpty;
-(BOOL)areThereRuns;
-(id)firstRunFont;
-(id)firstRunEffects;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)appendString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)runs;
-(void)setRuns:(id)arg1 ;
-(id)phoneticInfo;
-(id)initWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEqualToEDString:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(void)removeCharacterAtIndex:(unsigned long long)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(void)removeCharactersInSet:(id)arg1 ;
-(void)setPhoneticInfo:(id)arg1 ;
@end

