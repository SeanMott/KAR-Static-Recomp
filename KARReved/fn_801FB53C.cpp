//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD498.hpp"
#include "fn_802006B4.hpp"
#include "fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces.hpp"
#include "fn_8000925C.hpp"
#include "fn_801FD714.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "fn_802054E4.hpp"



void fn_801FB53C(PPC::Runtime::GCContext* context)
{
/*801FB53C 001F833C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801FB540 001F8340*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FB544 001F8344*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801FB548 001F8348*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801FB54C 001F834C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801FB550 001F8350*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB554 001F8354*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801FB558 001F8358*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801FB55C 001F835C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*801FB560 001F8360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801FB564 001F8364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801FB568 001F8368*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801FB56C 001F836C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801FB570 001F8370*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*801FB574 001F8374*/ PPC::Runtime::ASM::blt(.L_801FB58C);
/*801FB578 001F8378*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4b);
/*801FB57C 001F837C*/ PPC::Runtime::ASM::bge(.L_801FB58C);
/*801FB580 001F8380*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801FB584 001F8384*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801FB588 001F8388*/ PPC::Runtime::ASM::b(.L_801FB594);
RUNTIME_PPC_JUMP_LABEL(.L_801FB58C, 0x801FB58C) //this is a jump label
/*801FB58C 001F838C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801FB590 001F8390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801FB594, 0x801FB594) //this is a jump label
/*801FB594 001F8394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801FB598 001F8398*/ PPC::Runtime::ASM::bl(fn_801FD498);
/*801FB59C 001F839C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801FB5A0 001F83A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB5A4 001F83A4*/ PPC::Runtime::ASM::bl(fn_802006B4);
/*801FB5A8 001F83A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801FB5AC 001F83AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x18);
/*801FB5B0 001F83B0*/ PPC::Runtime::ASM::bge(.L_801FB5EC);
/*801FB5B4 001F83B4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r30, 1, 30);
/*801FB5B8 001F83B8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801FB5BC 001F83BC*/ PPC::Runtime::ASM::neg(context->r3, context->r3);
/*801FB5C0 001F83C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FB5C4 001F83C4*/ PPC::Runtime::ASM::xoris(context->r0, context->r3, 0x8000);
/*801FB5C8 001F83C8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2228 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB5CC 001F83CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FB5D0 001F83D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB5D4 001F83D4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r30, 6, 25, 25);
/*801FB5D8 001F83D8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FB5DC 001F83DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB5E0 001F83E0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801FB5E4 001F83E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r31));
/*801FB5E8 001F83E8*/ PPC::Runtime::ASM::b(.L_801FB604);
RUNTIME_PPC_JUMP_LABEL(.L_801FB5EC, 0x801FB5EC) //this is a jump label
/*801FB5EC 001F83EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB5F0 001F83F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801FB5F4 001F83F4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801FB5F8 001F83F8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB5FC 001F83FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB600 001F8400*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801FB604, 0x801FB604) //this is a jump label
/*801FB604 001F8404*/ PPC::Runtime::ASM::bl(fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces);
/*801FB608 001F8408*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FB60C 001F840C*/ PPC::Runtime::ASM::beq(.L_801FB620);
/*801FB610 001F8410*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB614 001F8414*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*801FB618 001F8418*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r31));
/*801FB61C 001F841C*/ PPC::Runtime::ASM::b(.L_801FB670);
RUNTIME_PPC_JUMP_LABEL(.L_801FB620, 0x801FB620) //this is a jump label
/*801FB620 001F8420*/ PPC::Runtime::ASM::bl(fn_8000925C);
/*801FB624 001F8424*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*801FB628 001F8428*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801FB62C 001F842C*/ PPC::Runtime::ASM::beq(.L_801FB654);
/*801FB630 001F8430*/ PPC::Runtime::ASM::bge(.L_801FB664);
/*801FB634 001F8434*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801FB638 001F8438*/ PPC::Runtime::ASM::bge(.L_801FB644);
/*801FB63C 001F843C*/ PPC::Runtime::ASM::b(.L_801FB664);
/*801FB640 001F8440*/ PPC::Runtime::ASM::b(.L_801FB664);
RUNTIME_PPC_JUMP_LABEL(.L_801FB644, 0x801FB644) //this is a jump label
/*801FB644 001F8444*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB648 001F8448*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*801FB64C 001F844C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r31));
/*801FB650 001F8450*/ PPC::Runtime::ASM::b(.L_801FB670);
RUNTIME_PPC_JUMP_LABEL(.L_801FB654, 0x801FB654) //this is a jump label
/*801FB654 001F8454*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB658 001F8458*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r3));
/*801FB65C 001F845C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r31));
/*801FB660 001F8460*/ PPC::Runtime::ASM::b(.L_801FB670);
RUNTIME_PPC_JUMP_LABEL(.L_801FB664, 0x801FB664) //this is a jump label
/*801FB664 001F8464*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB668 001F8468*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*801FB66C 001F846C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801FB670, 0x801FB670) //this is a jump label
/*801FB670 001F8470*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*801FB674 001F8474*/ PPC::Runtime::ASM::lis(context->r4, StructWithFuncPtrs_172 @ Get_MemoryOffset_HighBit);
/*801FB678 001F8478*/ PPC::Runtime::ASM::lis(context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_HighBit);
/*801FB67C 001F847C*/ PPC::Runtime::ASM::li(context->r7, 0xe);
/*801FB680 001F8480*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r31));
/*801FB684 001F8484*/ PPC::Runtime::ASM::addi(context->r0, context->r4, StructWithFuncPtrs_172 @ Get_MemoryOffset_LowBit);
/*801FB688 001F8488*/ PPC::Runtime::ASM::addi(context->r6, context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_LowBit);
/*801FB68C 001F848C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E220C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB690 001F8490*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801FB694 001F8494*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB698 001F8498*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x10);
/*801FB69C 001F849C*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x1c);
/*801FB6A0 001F84A0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*801FB6A4 001F84A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*801FB6A8 001F84A8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*801FB6AC 001F84AC*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DD878 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB6B0 001F84B0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*801FB6B4 001F84B4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r31));
/*801FB6B8 001F84B8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r31));
/*801FB6BC 001F84BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r31));
/*801FB6C0 001F84C0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r31));
/*801FB6C4 001F84C4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*801FB6C8 001F84C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r31));
/*801FB6CC 001F84CC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*801FB6D0 001F84D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*801FB6D4 001F84D4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*801FB6D8 001F84D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2cc, context->r31));
/*801FB6DC 001F84DC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r31));
/*801FB6E0 001F84E0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*801FB6E4 001F84E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*801FB6E8 001F84E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801FB6EC 001F84EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801FB6F0 001F84F0*/ PPC::Runtime::ASM::lwzx(context->r6, context->r6, context->r0);
/*801FB6F4 001F84F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801FB6F8 001F84F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*801FB6FC 001F84FC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801FB700 001F8500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801FB704 001F8504*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r31));
/*801FB708 001F8508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r31));
/*801FB70C 001F850C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*801FB710 001F8510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r31));
/*801FB714 001F8514*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r31));
/*801FB718 001F8518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r31));
/*801FB71C 001F851C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*801FB720 001F8520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*801FB724 001F8524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r31));
/*801FB728 001F8528*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*801FB72C 001F852C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*801FB730 001F8530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*801FB734 001F8534*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r31));
/*801FB738 001F8538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801FB73C 001F853C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*801FB740 001F8540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801FB744 001F8544*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*801FB748 001F8548*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x964, context->r31));
/*801FB74C 001F854C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r31));
/*801FB750 001F8550*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x968, context->r31));
/*801FB754 001F8554*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r31));
/*801FB758 001F8558*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x96c, context->r31));
/*801FB75C 001F855C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39c, context->r31));
/*801FB760 001F8560*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x970, context->r31));
/*801FB764 001F8564*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
/*801FB768 001F8568*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*801FB76C 001F856C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801FB770 001F8570*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34c, context->r31));
/*801FB774 001F8574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x350, context->r31));
/*801FB778 001F8578*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801FB77C 001F857C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r31));
/*801FB780 001F8580*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*801FB784 001F8584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*801FB788 001F8588*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r31));
/*801FB78C 001F858C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r31));
/*801FB790 001F8590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*801FB794 001F8594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x360, context->r31));
/*801FB798 001F8598*/ PPC::Runtime::ASM::bl(fn_801FD714);
/*801FB79C 001F859C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*801FB7A0 001F85A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*801FB7A4 001F85A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*801FB7A8 001F85A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801FB7AC 001F85AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*801FB7B0 001F85B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801FB7B4 001F85B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*801FB7B8 001F85B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801FB7BC 001F85BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801FB7C0 001F85C0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801FB7C4 001F85C4*/ PPC::Runtime::ASM::bne(.L_801FB7D0);
/*801FB7C8 001F85C8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801FB7CC 001F85CC*/ PPC::Runtime::ASM::b(.L_801FB7D4);
RUNTIME_PPC_JUMP_LABEL(.L_801FB7D0, 0x801FB7D0) //this is a jump label
/*801FB7D0 001F85D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801FB7D4, 0x801FB7D4) //this is a jump label
/*801FB7D4 001F85D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801FB7D8 001F85D8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801FB7DC 001F85DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x918);
/*801FB7E0 001F85E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801FB7E4 001F85E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*801FB7E8 001F85E8*/ PPC::Runtime::ASM::li(context->r5, 0x38);
/*801FB7EC 001F85EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r31));
/*801FB7F0 001F85F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x59c, context->r31));
/*801FB7F4 001F85F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x988, context->r31));
/*801FB7F8 001F85F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r31));
/*801FB7FC 001F85FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*801FB800 001F8600*/ PPC::Runtime::ASM::bl(memset);
/*801FB804 001F8604*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801FB808 001F8608*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801FB80C 001F860C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r31));
/*801FB810 001F8610*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x88c);
/*801FB814 001F8614*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801FB818 001F8618*/ PPC::Runtime::ASM::li(context->r5, 0x60);
/*801FB81C 001F861C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r31));
/*801FB820 001F8620*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52c, context->r31));
/*801FB824 001F8624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r31));
/*801FB828 001F8628*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r31));
/*801FB82C 001F862C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r31));
/*801FB830 001F8630*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 0, 30, 31);
/*801FB834 001F8634*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r31));
/*801FB838 001F8638*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r31));
/*801FB83C 001F863C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 6, 24, 25);
/*801FB840 001F8640*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r31));
/*801FB844 001F8644*/ PPC::Runtime::ASM::bl(memset);
/*801FB848 001F8648*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*801FB84C 001F864C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801FB850 001F8650*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88c, context->r31));
/*801FB854 001F8654*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB858 001F8658*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
/*801FB85C 001F865C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa74, context->r31));
/*801FB860 001F8660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa70, context->r31));
/*801FB864 001F8664*/ PPC::Runtime::ASM::bl(fn_802054E4);
/*801FB868 001F8668*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c8, context->r31));
/*801FB86C 001F866C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801FB870 001F8670*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5cc, context->r31));
/*801FB874 001F8674*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801FB878 001F8678*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E220C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB87C 001F867C*/ PPC::Runtime::ASM::lis(context->r0, 0xffff);
/*801FB880 001F8680*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x580, context->r31));
/*801FB884 001F8684*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB888 001F8688*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x584, context->r31));
/*801FB88C 001F868C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d0, context->r31));
/*801FB890 001F8690*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x588, context->r31));
/*801FB894 001F8694*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x594, context->r31));
/*801FB898 001F8698*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x958, context->r31));
/*801FB89C 001F869C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB8A0 001F86A0*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 5, 26, 26);
/*801FB8A4 001F86A4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB8A8 001F86A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3dc, context->r31));
/*801FB8AC 001F86AC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r31));
/*801FB8B0 001F86B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e0, context->r31));
/*801FB8B4 001F86B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c4, context->r31));
/*801FB8B8 001F86B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r31));
/*801FB8BC 001F86BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb14, context->r31));
/*801FB8C0 001F86C0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*801FB8C4 001F86C4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 0, 31, 31);
/*801FB8C8 001F86C8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*801FB8CC 001F86CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x984, context->r31));
/*801FB8D0 001F86D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r31));
/*801FB8D4 001F86D4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*801FB8D8 001F86D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb09, context->r31));
/*801FB8DC 001F86DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbbb, context->r31));
/*801FB8E0 001F86E0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*801FB8E4 001F86E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbbb, context->r31));
/*801FB8E8 001F86E8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r31));
/*801FB8EC 001F86EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa7c, context->r31));
/*801FB8F0 001F86F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*801FB8F4 001F86F4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801FB8F8 001F86F8*/ PPC::Runtime::ASM::beq(.L_801FB920);
/*801FB8FC 001F86FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*801FB900 001F8700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*801FB904 001F8704*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa80, context->r31));
/*801FB908 001F8708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa84, context->r31));
/*801FB90C 001F870C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*801FB910 001F8710*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa88, context->r31));
/*801FB914 001F8714*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r29));
/*801FB918 001F8718*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8c, context->r31));
/*801FB91C 001F871C*/ PPC::Runtime::ASM::b(.L_801FB944);
RUNTIME_PPC_JUMP_LABEL(.L_801FB920, 0x801FB920) //this is a jump label
/*801FB920 001F8720*/ PPC::Runtime::ASM::lis(context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_HighBit);
/*801FB924 001F8724*/ PPC::Runtime::ASM::addi(context->r4, context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_LowBit);
/*801FB928 001F8728*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801FB92C 001F872C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*801FB930 001F8730*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa80, context->r31));
/*801FB934 001F8734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa84, context->r31));
/*801FB938 001F8738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801FB93C 001F873C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa88, context->r31));
/*801FB940 001F8740*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801FB944, 0x801FB944) //this is a jump label
/*801FB944 001F8744*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB948 001F8748*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801FB94C 001F874C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*801FB950 001F8750*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801FB954 001F8754*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r31));
/*801FB958 001F8758*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r31));
/*801FB95C 001F875C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801FB960 001F8760*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r31));
/*801FB964 001F8764*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801FB968 001F8768*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801FB96C 001F876C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r4));
/*801FB970 001F8770*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801FB974 001F8774*/ PPC::Runtime::ASM::beq(.L_801FB9D8);
/*801FB978 001F8778*/ PPC::Runtime::ASM::bge(.L_801FB9E4);
/*801FB97C 001F877C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801FB980 001F8780*/ PPC::Runtime::ASM::bge(.L_801FB988);
/*801FB984 001F8784*/ PPC::Runtime::ASM::b(.L_801FB9E4);
RUNTIME_PPC_JUMP_LABEL(.L_801FB988, 0x801FB988) //this is a jump label
/*801FB988 001F8788*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r4));
/*801FB98C 001F878C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801FB990 001F8790*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2218 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB994 001F8794*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f0);
/*801FB998 001F8798*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r4));
/*801FB99C 001F879C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E2210 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB9A0 001F87A0*/ PPC::Runtime::ASM::fmul(context->f1, context->f2, context->f1);
/*801FB9A4 001F87A4*/ PPC::Runtime::ASM::fdiv(context->f0, context->f1, context->f0);
/*801FB9A8 001F87A8*/ PPC::Runtime::ASM::fdiv(context->f0, context->f3, context->f0);
/*801FB9AC 001F87AC*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*801FB9B0 001F87B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*801FB9B4 001F87B4*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801FB9B8 001F87B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FB9BC 001F87BC*/ PPC::Runtime::ASM::bne(.L_801FB9C8);
/*801FB9C0 001F87C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*801FB9C4 001F87C4*/ PPC::Runtime::ASM::b(.L_801FB9D0);
RUNTIME_PPC_JUMP_LABEL(.L_801FB9C8, 0x801FB9C8) //this is a jump label
/*801FB9C8 001F87C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*801FB9CC 001F87CC*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801FB9D0, 0x801FB9D0) //this is a jump label
/*801FB9D0 001F87D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*801FB9D4 001F87D4*/ PPC::Runtime::ASM::b(.L_801FB9EC);
RUNTIME_PPC_JUMP_LABEL(.L_801FB9D8, 0x801FB9D8) //this is a jump label
/*801FB9D8 001F87D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r4));
/*801FB9DC 001F87DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*801FB9E0 001F87E0*/ PPC::Runtime::ASM::b(.L_801FB9EC);
RUNTIME_PPC_JUMP_LABEL(.L_801FB9E4, 0x801FB9E4) //this is a jump label
/*801FB9E4 001F87E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2220 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FB9E8 001F87E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801FB9EC, 0x801FB9EC) //this is a jump label
/*801FB9EC 001F87EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*801FB9F0 001F87F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801FB9F4 001F87F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa8, context->r31));
/*801FB9F8 001F87F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaac, context->r31));
/*801FB9FC 001F87FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801FBA00 001F8800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xab0, context->r31));
/*801FBA04 001F8804*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r29));
/*801FBA08 001F8808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r29));
/*801FBA0C 001F880C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r31));
/*801FBA10 001F8810*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x900, context->r31));
/*801FBA14 001F8814*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
/*801FBA18 001F8818*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r31));
/*801FBA1C 001F881C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801FBA20 001F8820*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801FBA24 001F8824*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FBA28 001F8828*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801FBA2C 001F882C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FBA30 001F8830*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801FBA34 001F8834*/ PPC::Runtime::ASM::blr();
}