
//----------------------------------------------------
// The following code was generated by CUP v0.10k TUM Edition 20050516
// Wed Mar 22 16:24:07 CST 2006
//----------------------------------------------------

package lex;

import java_cup.runtime.*;
import java.util.*;
import electric_sheet.*;

/** CUP v0.10k TUM Edition 20050516 generated parser.
  * @version Wed Mar 22 16:24:07 CST 2006
  */
public class parser extends java_cup.runtime.lr_parser {

  /** Default constructor. */
  public parser() {super();}

  /** Constructor which sets the default scanner. */
  public parser(java_cup.runtime.Scanner s) {super(s);}

  /** Production table. */
  protected static final short _production_table[][] = 
    unpackFromStrings(new String[] {
    "\000\037\000\002\003\004\000\002\002\004\000\002\003" +
    "\003\000\002\003\003\000\002\004\015\000\002\016\004" +
    "\000\002\016\003\000\002\016\004\000\002\016\003\000" +
    "\002\016\004\000\002\016\003\000\002\016\003\000\002" +
    "\013\006\000\002\013\006\000\002\013\003\000\002\013" +
    "\003\000\002\014\005\000\002\014\003\000\002\006\007" +
    "\000\002\011\003\000\002\007\007\000\002\010\007\000" +
    "\002\012\003\000\002\012\005\000\002\012\005\000\002" +
    "\012\005\000\002\012\005\000\002\015\003\000\002\015" +
    "\003\000\002\015\004\000\002\015\004" });

  /** Access to production table. */
  public short[][] production_table() {return _production_table;}

  /** Parse-action table. */
  protected static final short[][] _action_table = 
    unpackFromStrings(new String[] {
    "\000\103\000\016\011\012\015\006\021\007\022\014\023" +
    "\004\024\011\001\002\000\006\002\ufff6\024\ufff6\001\002" +
    "\000\006\002\uffff\024\uffff\001\002\000\006\021\105\022" +
    "\104\001\002\000\006\002\ufffb\024\ufffb\001\002\000\006" +
    "\002\103\024\101\001\002\000\010\002\ufff7\006\067\024" +
    "\ufff7\001\002\000\014\006\024\015\016\021\017\022\026" +
    "\024\022\001\002\000\006\002\ufffe\024\ufffe\001\002\000" +
    "\006\002\ufff9\024\ufff9\001\002\000\006\002\uffee\024\uffee" +
    "\001\002\000\006\021\066\022\065\001\002\000\022\002" +
    "\uffe6\004\uffe6\007\uffe6\014\uffe6\015\uffe6\016\uffe6\017\uffe6" +
    "\024\uffe6\001\002\000\006\002\ufff3\024\ufff3\001\002\000" +
    "\016\002\uffeb\014\uffeb\015\uffeb\016\uffeb\017\uffeb\024\uffeb" +
    "\001\002\000\004\006\043\001\002\000\006\002\ufffc\024" +
    "\ufffc\001\002\000\004\022\037\001\002\000\016\002\ufff2" +
    "\014\027\015\030\016\032\017\031\024\ufff2\001\002\000" +
    "\022\002\uffe5\004\uffe5\007\uffe5\014\uffe5\015\uffe5\016\uffe5" +
    "\017\uffe5\024\uffe5\001\002\000\010\015\016\021\017\022" +
    "\026\001\002\000\010\015\016\021\017\022\026\001\002" +
    "\000\010\015\016\021\017\022\026\001\002\000\010\015" +
    "\016\021\017\022\026\001\002\000\016\002\uffe8\014\uffe8" +
    "\015\uffe8\016\uffe8\017\uffe8\024\uffe8\001\002\000\016\002" +
    "\uffe7\014\uffe7\015\uffe7\016\uffe7\017\uffe7\024\uffe7\001\002" +
    "\000\016\002\uffe9\014\uffe9\015\uffe9\016\uffe9\017\uffe9\024" +
    "\uffe9\001\002\000\016\002\uffea\014\uffea\015\uffea\016\uffea" +
    "\017\uffea\024\uffea\001\002\000\004\004\040\001\002\000" +
    "\004\022\041\001\002\000\004\007\042\001\002\000\010" +
    "\002\uffed\004\uffed\024\uffed\001\002\000\012\015\016\021" +
    "\017\022\026\024\044\001\002\000\004\004\054\001\002" +
    "\000\006\004\ufff0\007\ufff0\001\002\000\004\007\053\001" +
    "\002\000\006\004\050\007\051\001\002\000\010\015\016" +
    "\021\017\022\026\001\002\000\006\002\ufff4\024\ufff4\001" +
    "\002\000\006\004\ufff1\007\ufff1\001\002\000\006\002\ufff5" +
    "\024\ufff5\001\002\000\004\006\024\001\002\000\004\004" +
    "\056\001\002\000\004\006\060\001\002\000\004\007\uffef" +
    "\001\002\000\004\022\061\001\002\000\004\004\062\001" +
    "\002\000\004\022\063\001\002\000\004\007\064\001\002" +
    "\000\004\007\uffec\001\002\000\022\002\uffe3\004\uffe3\007" +
    "\uffe3\014\uffe3\015\uffe3\016\uffe3\017\uffe3\024\uffe3\001\002" +
    "\000\022\002\uffe4\004\uffe4\007\uffe4\014\uffe4\015\uffe4\016" +
    "\uffe4\017\uffe4\024\uffe4\001\002\000\004\025\070\001\002" +
    "\000\004\004\071\001\002\000\004\025\072\001\002\000" +
    "\004\004\073\001\002\000\004\025\074\001\002\000\004" +
    "\004\075\001\002\000\004\025\076\001\002\000\004\007" +
    "\077\001\002\000\004\010\100\001\002\000\006\002\ufffd" +
    "\024\ufffd\001\002\000\004\006\067\001\002\000\006\002" +
    "\001\024\001\001\002\000\004\002\000\001\002\000\006" +
    "\002\ufff8\024\ufff8\001\002\000\006\002\ufffa\024\ufffa\001" +
    "\002" });

  /** Access to parse-action table. */
  public short[][] action_table() {return _action_table;}

  /** <code>reduce_goto</code> table. */
  protected static final short[][] _reduce_table = 
    unpackFromStrings(new String[] {
    "\000\103\000\010\003\007\004\004\016\012\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\004\004\101\001\001\000\002\001\001\000" +
    "\014\007\014\011\017\012\024\013\022\015\020\001\001" +
    "\000\002\001\001\000\002\001\001\000\002\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001\000\004\015\035" +
    "\001\001\000\004\015\034\001\001\000\004\015\033\001" +
    "\001\000\004\015\032\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001\000\002\001\001" +
    "\000\010\006\045\014\046\015\044\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001\000\002\001\001" +
    "\000\004\015\051\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\004\007\054\001\001\000\002" +
    "\001\001\000\004\010\056\001\001\000\002\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001\000\002\001\001" +
    "\000\002\001\001\000\002\001\001\000\002\001\001\000" +
    "\002\001\001\000\002\001\001\000\002\001\001\000\002" +
    "\001\001\000\002\001\001\000\002\001\001\000\002\001" +
    "\001\000\002\001\001\000\002\001\001" });

  /** Access to <code>reduce_goto</code> table. */
  public short[][] reduce_table() {return _reduce_table;}

  /** Instance of action encapsulation class. */
  protected CUP$parser$actions action_obj;

  /** Action encapsulation object initializer. */
  protected void init_actions()
    {
      action_obj = new CUP$parser$actions(this);
    }

  /** Invoke a user supplied parse action. */
  public java_cup.runtime.Symbol do_action(
    int                        act_num,
    java_cup.runtime.lr_parser parser,
    java.util.Stack            stack,
    int                        top)
    throws java.lang.Exception
  {
    /* call code in generated class */
    return action_obj.CUP$parser$do_action(act_num, parser, stack, top);
  }

  /** Indicates start state. */
  public int start_state() {return 0;}
  /** Indicates start production. */
  public int start_production() {return 1;}

  /** <code>EOF</code> Symbol index. */
  public int EOF_sym() {return 0;}

  /** <code>error</code> Symbol index. */
  public int error_sym() {return 1;}


	
                private static int modo = 0; // 0: aritmetica 1: funcion o asignacion
                // lista de numeros para evaluar funciones con listas de numeros
                protected LinkedList<Double> listaNumeros = new LinkedList<Double>(); 
                /*Coordenadas para */
                private static int colx0; //columna en x
                private static int fily0; //columna en y
                private static int colx1; //columna en x
                private static int fily1; //columna en y
                private static String idHoja; //Hoja en la que se evaluara
                private static String expr; //Hoja en la que se evaluara
                private Kreator creador;
                /*public Lexer scanner;*/
		private static String retval;
		public void setRetval(String s){
			retval = s;
		}
                /**Asigna la clase creadora de datos*/
                public void setCreador(Kreator kr){
                    creador = kr;
                }
                /**Devuelve la clase creadora de datos*/
                public Kreator getCreador(){
                    return creador;
                }
		/**Retorna expresion aritmetica evaluada*/
		public String getEvaluatedExpr(){
			return retval;
		}
                public static int getX0(){
                    return colx0;
                    }
                public static int getY0(){
                    return fily0;
                }
                public static void setX0(int x){
                    colx0 = x;
                }
                public static void setY0(int y){
                    fily0 = y;
                }
                public static int getX1(){
                    return colx1;
                    }
                public static int getY1(){
                    return fily1;
                }
                public static void setX1(int x){
                    colx1 = x;
                }
                public static void setY1(int y){
                    fily1 = y;
                }
                public static String getIdHoja(){
                    return idHoja;
                }
                public static void setIdHoja(String id){
                    idHoja = new String(id);
                }
                public static String getExpr(){
                    return expr;
                }
                public static void setExpr(String id){
                    expr = new String(id);
                }
                public static int getModo(){
                    return modo;
                }
                public static void setModo(int x){
                    modo = x;
                }

}

/** Cup generated class to encapsulate user supplied action code.*/
class CUP$parser$actions {
  private final parser parser;

  /** Constructor */
  CUP$parser$actions(parser parser) {
    this.parser = parser;
  }

  /** Method with the actual generated action code. */
  public final java_cup.runtime.Symbol CUP$parser$do_action(
    int                        CUP$parser$act_num,
    java_cup.runtime.lr_parser CUP$parser$parser,
    java.util.Stack            CUP$parser$stack,
    int                        CUP$parser$top)
    throws java.lang.Exception
    {
      /* Symbol object for return from actions */
      java_cup.runtime.Symbol CUP$parser$result;

      /* select the action based on the action number */
      switch (CUP$parser$act_num)
        {
          /*. . . . . . . . . . . . . . . . . . . .*/
          case 30: // numero ::= MENOS ENTEROPOS 
            {
              Double RESULT = null;
		int e1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int e1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Integer e1 = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new Double(0 - (double) e1.intValue());
              CUP$parser$result = new java_cup.runtime.Symbol(11/*numero*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 29: // numero ::= MENOS FLOTANTE 
            {
              Double RESULT = null;
		int e1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int e1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double e1 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new Double(0 - e1.doubleValue());
              CUP$parser$result = new java_cup.runtime.Symbol(11/*numero*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 28: // numero ::= ENTEROPOS 
            {
              Double RESULT = null;
		int eleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int eright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Integer e = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = (double) e.intValue();
              CUP$parser$result = new java_cup.runtime.Symbol(11/*numero*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 27: // numero ::= FLOTANTE 
            {
              Double RESULT = null;
		int fleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int fright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double f = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT=f.doubleValue();
              CUP$parser$result = new java_cup.runtime.Symbol(11/*numero*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 26: // expr ::= expr DIV numero 
            {
              Double RESULT = null;
		int e1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left;
		int e1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).right;
		Double e1 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-2)).value;
		int e2left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int e2right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double e2 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		
		if(e2.doubleValue() != 0)
			RESULT = new Double(e1.doubleValue() * e2.doubleValue());
		else
			RESULT = new Double(0);
		
              CUP$parser$result = new java_cup.runtime.Symbol(8/*expr*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 25: // expr ::= expr POR numero 
            {
              Double RESULT = null;
		int e1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left;
		int e1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).right;
		Double e1 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-2)).value;
		int e2left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int e2right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double e2 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new Double(e1.doubleValue() * e2.doubleValue());
              CUP$parser$result = new java_cup.runtime.Symbol(8/*expr*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 24: // expr ::= expr MENOS numero 
            {
              Double RESULT = null;
		int e1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left;
		int e1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).right;
		Double e1 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-2)).value;
		int e2left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int e2right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double e2 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new Double(e1.doubleValue() - e2.doubleValue());
              CUP$parser$result = new java_cup.runtime.Symbol(8/*expr*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 23: // expr ::= expr MAS numero 
            {
              Double RESULT = null;
		int e1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left;
		int e1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).right;
		Double e1 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-2)).value;
		int e2left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int e2right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double e2 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new Double(e1.doubleValue() + e2.doubleValue());
              CUP$parser$result = new java_cup.runtime.Symbol(8/*expr*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 22: // expr ::= numero 
            {
              Double RESULT = null;
		int nleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int nright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double n = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new Double(n.doubleValue());
              CUP$parser$result = new java_cup.runtime.Symbol(8/*expr*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 21: // coords1 ::= APARENT ENTEROPOS COMA ENTEROPOS CPARENT 
            {
              Object RESULT = null;
		int xleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).left;
		int xright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).right;
		Integer x = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-3)).value;
		int yleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left;
		int yright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).right;
		Integer y = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-1)).value;
		  parser.setX1(new Integer(x.intValue()));
                    parser.setY1(new Integer(y.intValue()));
              CUP$parser$result = new java_cup.runtime.Symbol(6/*coords1*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 20: // coords0 ::= APARENT ENTEROPOS COMA ENTEROPOS CPARENT 
            {
              Object RESULT = null;
		int xleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).left;
		int xright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).right;
		Integer x = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-3)).value;
		int yleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left;
		int yright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).right;
		Integer y = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-1)).value;
		  if (x.intValue()>0 && y.intValue()>0){
                        parser.setX0(new Integer(x.intValue()));
                        parser.setY0(new Integer(y.intValue()));
                    }
                
              CUP$parser$result = new java_cup.runtime.Symbol(5/*coords0*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 19: // asignacion ::= coords0 
            {
              Object RESULT = null;

              CUP$parser$result = new java_cup.runtime.Symbol(7/*asignacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 18: // rango ::= ID COMA coords0 COMA coords1 
            {
              Object RESULT = null;
		int hojaleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).left;
		int hojaright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).right;
		String hoja = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-4)).value;
		parser.setIdHoja(new String(hoja));
              CUP$parser$result = new java_cup.runtime.Symbol(4/*rango*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 17: // serie_num ::= numero 
            {
              Double RESULT = null;
		int fleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int fright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double f = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		parser.listaNumeros.add(new Double(f));
              CUP$parser$result = new java_cup.runtime.Symbol(10/*serie_num*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 16: // serie_num ::= serie_num COMA numero 
            {
              Double RESULT = null;
		int fleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int fright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double f = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		parser.listaNumeros.add(new Double(f));
              CUP$parser$result = new java_cup.runtime.Symbol(10/*serie_num*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 15: // operacion ::= expr 
            {
              Double RESULT = null;
		int eleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int eright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double e = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = e.doubleValue();parser.setModo(0);
              CUP$parser$result = new java_cup.runtime.Symbol(9/*operacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 14: // operacion ::= asignacion 
            {
              Double RESULT = null;
		RESULT = new Double(2);parser.setModo(1);
              CUP$parser$result = new java_cup.runtime.Symbol(9/*operacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 13: // operacion ::= ID APARENT serie_num CPARENT 
            {
              Double RESULT = null;
		int idleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).left;
		int idright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).right;
		String id = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-3)).value;
		
                /* Se implementara un algoritmo similar al aplicado en electric_sheet.tda.Operacion */
                    double retval = 0;
                    Double readed = new Double(0);
                    if (id.equalsIgnoreCase("SUMA")){
                        while(parser.listaNumeros.size() > 0){
                            readed = (Double) parser.listaNumeros.poll();
                            retval += readed.doubleValue();
                        }     
                    }
                    else if (id.equalsIgnoreCase("MULT")){
                        if (parser.listaNumeros.size()>0){
                            retval = 1;
                            while(parser.listaNumeros.size() > 0){
                                readed = (Double) parser.listaNumeros.poll();
                                retval *= readed.doubleValue();
                            }
                        }
                    }
                    else if (id.equalsIgnoreCase("PROM")){
                        int numdatos = parser.listaNumeros.size();
                        retval = 0;
                        while(parser.listaNumeros.size() > 0){
                            readed = (Double) parser.listaNumeros.poll();
                            retval += readed.doubleValue();
                        }
                        if (numdatos > 0)
                            retval = retval / numdatos;
                        else
                            retval = 0;
                    }
                    parser.setModo(0);
                    RESULT = retval;
                
              CUP$parser$result = new java_cup.runtime.Symbol(9/*operacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 12: // operacion ::= ID APARENT rango CPARENT 
            {
              Double RESULT = null;
		int idleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).left;
		int idright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).right;
		String id = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-3)).value;
		
                    RESULT = new Double(1);
                    if (id.equalsIgnoreCase("SUMA"))
                        parser.setModo(2);
                    else if (id.equalsIgnoreCase("MULT"))
                        parser.setModo(4);
                    else if (id.equalsIgnoreCase("PROM"))
                        parser.setModo(6);
                
              CUP$parser$result = new java_cup.runtime.Symbol(9/*operacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-3)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 11: // evaluacion ::= CADENA 
            {
              String RESULT = null;
		int cleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int cright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		String c = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		 parser.setModo(0);parser.setExpr(new String(c));RESULT = new String(c);
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 10: // evaluacion ::= ID 
            {
              String RESULT = null;
		int idleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int idright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		String id = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new String(id);
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 9: // evaluacion ::= MENOS ENTEROPOS 
            {
              String RESULT = null;
		int eleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int eright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Integer e = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new String(new Integer( 0 - e.intValue() ).toString() );
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 8: // evaluacion ::= ENTEROPOS 
            {
              String RESULT = null;
		int eleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int eright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Integer e = (Integer)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new String(new Integer(e.intValue()).toString());
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 7: // evaluacion ::= MENOS FLOTANTE 
            {
              String RESULT = null;
		int fleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int fright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double f = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new String(new Double( 0 - f.doubleValue()).toString() );
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 6: // evaluacion ::= FLOTANTE 
            {
              String RESULT = null;
		int fleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int fright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double f = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new String(new Double(f.doubleValue()).toString());
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 5: // evaluacion ::= IGUAL operacion 
            {
              String RESULT = null;
		int o1left = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int o1right = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		Double o1 = (Double)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		RESULT = new String(new Double(o1.doubleValue()).toString());
              CUP$parser$result = new java_cup.runtime.Symbol(12/*evaluacion*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 4: // file_in ::= ID APARENT EXPR COMA EXPR COMA EXPR COMA EXPR CPARENT PUNTOYCOMA 
            {
              Object RESULT = null;
		int idleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-10)).left;
		int idright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-10)).right;
		String id = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-10)).value;
		int hojaleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-8)).left;
		int hojaright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-8)).right;
		String hoja = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-8)).value;
		int yleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-6)).left;
		int yright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-6)).right;
		String y = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-6)).value;
		int xleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).left;
		int xright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-4)).right;
		String x = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-4)).value;
		int exleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).left;
		int exright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-2)).right;
		String ex = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-2)).value;
		
                        if (id.equalsIgnoreCase("Dato")){
                        parser.setIdHoja(new String(hoja));
                        parser.setX0(Integer.valueOf(x).intValue());
                        parser.setY0(Integer.valueOf(y).intValue());
                        parser.setExpr(new String(ex));
                        }
                        
              CUP$parser$result = new java_cup.runtime.Symbol(2/*file_in*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-10)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 3: // inicio ::= evaluacion 
            {
              Object RESULT = null;
		int eleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left;
		int eright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right;
		String e = (String)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-0)).value;
		parser.setRetval(new String(e.toString()));
              CUP$parser$result = new java_cup.runtime.Symbol(1/*inicio*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 2: // inicio ::= file_in 
            {
              Object RESULT = null;
		parser.getCreador().insertarDatos(parser.getIdHoja(),
                                                        parser.getY0(),parser.getX0(),parser.getExpr());
              CUP$parser$result = new java_cup.runtime.Symbol(1/*inicio*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 1: // $START ::= inicio EOF 
            {
              Object RESULT = null;
		int start_valleft = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left;
		int start_valright = ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).right;
		Object start_val = (Object)((java_cup.runtime.Symbol) CUP$parser$stack.elementAt(CUP$parser$top-1)).value;
		RESULT = start_val;
              CUP$parser$result = new java_cup.runtime.Symbol(0/*$START*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          /* ACCEPT */
          CUP$parser$parser.done_parsing();
          return CUP$parser$result;

          /*. . . . . . . . . . . . . . . . . . . .*/
          case 0: // inicio ::= inicio file_in 
            {
              Object RESULT = null;
		parser.getCreador().insertarDatos(parser.getIdHoja(),
                                                        parser.getY0(),parser.getX0(),parser.getExpr());
              CUP$parser$result = new java_cup.runtime.Symbol(1/*inicio*/, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-1)).left, ((java_cup.runtime.Symbol)CUP$parser$stack.elementAt(CUP$parser$top-0)).right, RESULT);
            }
          return CUP$parser$result;

          /* . . . . . .*/
          default:
            throw new Exception(
               "Invalid action number found in internal parse table");

        }
    }
}
