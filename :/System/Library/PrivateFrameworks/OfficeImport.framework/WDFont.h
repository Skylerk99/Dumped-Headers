/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mAlternateNames;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
+(int)cpFontClassFromWdFontFamily:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(int)pitch;
-(void)addAlternateName:(id)arg1 ;
-(void)setFontFamily:(int)arg1 ;
-(void)setCharacterSet:(int)arg1 ;
-(void)setPitch:(int)arg1 ;
-(id)secondName;
-(int)fontFamily;
-(int)characterSet;
-(id)alternateNames;
@end

