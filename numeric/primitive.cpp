t e m p l a t e   < t y p e n a m e   T >  
 s t r u c t   P r i m i t i v e V a r M o d   {   s t a t i c   T   v a l u e ;   } ;  
 t e m p l a t e   < t y p e n a m e   T >  
 T   P r i m i t i v e V a r M o d < T > : : v a l u e ;  
  
 t e m p l a t e   < t y p e n a m e   T ,   c l a s s   F >  
 T   G e t P r i m i t i v e R o o t ( c o n s t   T &   m o d u l o ,   c o n s t   F &   f a c t o r i z e )   {  
     i f   ( m o d u l o   < =   0 )   {  
         r e t u r n   - 1 ;  
     }  
     i f   ( m o d u l o   = =   1   | |   m o d u l o   = =   2   | |   m o d u l o   = =   4 )   {  
         r e t u r n   m o d u l o   -   1 ;  
     }  
     v e c t o r < p a i r < T ,   i n t > >   m o d u l o _ f a c t o r s   =   f a c t o r i z e ( m o d u l o ) ;  
     i f   ( m o d u l o _ f a c t o r s [ 0 ] . f i r s t   = =   2   & &   ( m o d u l o _ f a c t o r s [ 0 ] . s e c o n d   ! =   1   | |   m o d u l o _ f a c t o r s . s i z e ( )   ! =   2 ) )   {  
         r e t u r n   - 1 ;  
     }  
     i f   ( m o d u l o _ f a c t o r s [ 0 ] . f i r s t   ! =   2   & &   m o d u l o _ f a c t o r s . s i z e ( )   ! =   1 )   {  
         r e t u r n   - 1 ;  
     }  
     s e t < T >   p h i _ f a c t o r s ;  
     T   p h i   =   m o d u l o ;  
     f o r   ( a u t o &   d   :   m o d u l o _ f a c t o r s )   {  
         p h i   =   p h i   /   d . f i r s t   *   ( d . f i r s t   -   1 ) ;  
         i f   ( d . s e c o n d   >   1 )   {  
             p h i _ f a c t o r s . i n s e r t ( d . f i r s t ) ;  
         }  
         f o r   ( a u t o &   e   :   f a c t o r i z e ( d . f i r s t   -   1 ) )   {  
             p h i _ f a c t o r s . i n s e r t ( e . f i r s t ) ;  
         }  
     }  
     P r i m i t i v e V a r M o d < T > : : v a l u e   =   m o d u l o ;  
     M o d u l a r < P r i m i t i v e V a r M o d < T > >   g e n   =   2 ;  
     w h i l e   ( g e n   ! =   0 )   {  
         i f   ( p o w e r ( g e n ,   p h i )   ! =   1 )   {  
             c o n t i n u e ;  
         }  
         b o o l   o k   =   t r u e ;  
         f o r   ( a u t o &   p   :   p h i _ f a c t o r s )   {  
               i f   ( p o w e r ( g e n ,   p h i   /   p )   = =   1 )   {  
                   o k   =   f a l s e ;  
                   b r e a k ;  
               }  
           }  
         i f   ( o k )   {  
             r e t u r n   g e n ( ) ;  
         }  
         g e n + + ;  
     }  
     a s s e r t ( f a l s e ) ;  
     r e t u r n   - 1 ;  
 }  
  
 t e m p l a t e   < t y p e n a m e   T >  
 T   G e t P r i m i t i v e R o o t ( c o n s t   T &   m o d u l o )   {  
     r e t u r n   G e t P r i m i t i v e R o o t ( m o d u l o ,   f a c t o r i z e r : : F a c t o r i z e < T > ) ;  
 } 