/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSCharacterSet;

@interface OISFUJsonScanner : NSObject {

	NSString* mString;
	unsigned short* mCharacters;
	unsigned long long mLength;
	unsigned long long mOffset;
	NSCharacterSet* mWhitespaceCharacterSet;
	NSCharacterSet* mDecimalDigitCharacterSet;

}
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(void)skipWhitespace;
-(id)parseObjectWithMaxDepth:(int)arg1 ;
-(id)parseArrayWithMaxDepth:(int)arg1 ;
-(id)parseDictionaryWithMaxDepth:(int)arg1 ;
-(unsigned short)nextCharacter;
-(void)appendCharactersInRange:(NSRange)arg1 toString:(id)arg2 ;
-(id)parseHexCharacter;
-(id)parseString;
-(BOOL)parseConstantString:(const char*)arg1 ;
-(id)parseNull;
-(id)parseTrue;
-(id)parseFalse;
-(id)parseNumber;
@end

