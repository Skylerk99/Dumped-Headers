/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPlaceholderSmartField.h>

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField {

	unsigned _displayFlags;

}

@property (assign,nonatomic) unsigned displayFlags;              //@synthesize displayFlags=_displayFlags - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(int)smartFieldKind;
-(BOOL)allowsPasteAsSmartField;
-(const PlaceholderSmartFieldArchive*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1 ;
-(void)setDisplayFlags:(unsigned)arg1 ;
-(unsigned)displayFlags;
@end

