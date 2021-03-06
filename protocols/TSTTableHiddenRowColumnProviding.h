/* Generated by RuntimeBrowser.
 */

@protocol TSTTableHiddenRowColumnProviding <NSObject>

@required

- (bool)anyHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)anyHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)hasHiddenColumnAtIndex:(unsigned char)arg1;
- (bool)hasHiddenRowAtIndex:(unsigned short)arg1;
- (unsigned char)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnAfterColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned char)arg1;
- (unsigned short)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowAfterRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeRowAtIndex:(unsigned short)arg1;

@end
