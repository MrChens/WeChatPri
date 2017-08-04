//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseParser.h"

@class NSMutableDictionary, UIColor, UIFont;

@interface TextParser : BaseParser
{
    UIFont *_font;
    UIColor *_color;
    UIColor *_shadowColor;
    struct CGSize shadowOffset;
    NSMutableDictionary *m_dictWordLen;
    int m_maxAlphaWordLen;
    struct CGSize m_chineseWordSize;
    _Bool _isCHS;
    double _lineSpacing;
    struct CGSize _shadowOffset;
}

+ (void)initialize;
+ (id)newInstance;
+ (id)getAlphaSet;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool isCHS; // @synthesize isCHS=_isCHS;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)attributeStringForContent:(id)arg1;
- (id)styleStringForContent:(id)arg1 withParserPosition:(struct _NSParserPosition)arg2 outputLastPosition:(struct _NSParserPosition *)arg3;
- (id)getStylesForString:(id)arg1 withStyleString:(id)arg2;
- (id)stylesForString:(id)arg1 withRange:(struct _NSRange)arg2 withParserPosition:(struct _NSParserPosition *)arg3;
- (id)parseTextForStyles:(id)arg1 withParserPosition:(struct _NSParserPosition *)arg2;
- (long long)FindtheIndexToFillFullLine:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 width:(long long)arg4 withFont:(id)arg5 withError:(long long)arg6;
- (id)arrayWithWordSplit:(id)arg1;
- (void)addAlphaWord:(id)arg1 ToSplitArray:(id)arg2;
- (id)getStyle;
- (struct _NSRange)rangeOfObjectInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (id)substringOf:(id)arg1 WithRange:(struct _NSRange)arg2;
- (struct CGSize)calcWordSize:(id)arg1;
- (id)init;

@end

