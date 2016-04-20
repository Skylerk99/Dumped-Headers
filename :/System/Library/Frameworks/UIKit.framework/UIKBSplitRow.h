/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, NSDictionary, UIKBTree;

@interface UIKBSplitRow : NSObject {

	unsigned char _rowIndex;
	double _rowOffset;
	double _rowWidth;
	CGSize _defaultKeySize;
	NSMutableArray* _keys;
	NSMutableArray* _vacancies;
	NSDictionary* _hints;
	UIKBTree* _keylistLeft;
	UIKBTree* _geolistLeft;
	UIKBTree* _attrlistLeft;
	UIKBTree* _keylistRight;
	UIKBTree* _geolistRight;
	UIKBTree* _attrlistRight;

}

@property (assign,nonatomic) unsigned char rowIndex;              //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign) double rowOffset;                              //@synthesize rowOffset=_rowOffset - In the implementation block
@property (assign) double rowWidth;                               //@synthesize rowWidth=_rowWidth - In the implementation block
@property (assign) CGSize defaultKeySize;                         //@synthesize defaultKeySize=_defaultKeySize - In the implementation block
@property (readonly) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
@property (retain) NSDictionary * hints;                          //@synthesize hints=_hints - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned char)rowIndex;
-(NSMutableArray *)keys;
-(void)setRowIndex:(unsigned char)arg1 ;
-(void)setHints:(NSDictionary *)arg1 ;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(int)arg1 ;
-(id)listOfType:(int)arg1 left:(BOOL)arg2 ;
-(double)rowOffset;
-(void)setRowOffset:(double)arg1 ;
-(double)rowWidth;
-(void)setRowWidth:(double)arg1 ;
-(CGSize)defaultKeySize;
-(void)setDefaultKeySize:(CGSize)arg1 ;
-(NSDictionary *)hints;
@end

