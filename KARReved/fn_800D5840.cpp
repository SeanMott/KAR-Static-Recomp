//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7A64.hpp"
#include "fn_801097B8.hpp"
#include "fn_80109D74.hpp"



void fn_800D5840(PPC::Runtime::GCContext* context)
{
/*800D5840 000D2640*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D5844 000D2644*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D5848 000D2648*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D584C 000D264C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D5850 000D2650*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D5854 000D2654*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800D5858 000D2658*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*800D585C 000D265C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800D5860 000D2660*/ PPC::Runtime::ASM::beq(.L_800D5880);
/*800D5864 000D2664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800D5868 000D2668*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800D586C 000D266C*/ PPC::Runtime::ASM::bne(.L_800D5880);
/*800D5870 000D2670*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800D5874 000D2674*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*800D5878 000D2678*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x750, context->r3));
/*800D587C 000D267C*/ PPC::Runtime::ASM::b(.L_800D5894);
RUNTIME_PPC_JUMP_LABEL(.L_800D5880, 0x800D5880) //this is a jump label
/*800D5880 000D2680*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D5884 000D2684*/ PPC::Runtime::ASM::li(context->r4, 0xf2d);
/*800D5888 000D2688*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6098 @ Get_MemoryOffset_SDA21);
/*800D588C 000D268C*/ PPC::Runtime::ASM::bl(fn___assert);
/*800D5890 000D2690*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D5894, 0x800D5894) //this is a jump label
/*800D5894 000D2694*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D5898 000D2698*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*800D589C 000D269C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3f);
/*800D58A0 000D26A0*/ PPC::Runtime::ASM::beq(.L_800D58C0);
/*800D58A4 000D26A4*/ PPC::Runtime::ASM::bge(.L_800D58CC);
/*800D58A8 000D26A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3e);
/*800D58AC 000D26AC*/ PPC::Runtime::ASM::bge(.L_800D58B4);
/*800D58B0 000D26B0*/ PPC::Runtime::ASM::b(.L_800D58CC);
RUNTIME_PPC_JUMP_LABEL(.L_800D58B4, 0x800D58B4) //this is a jump label
/*800D58B4 000D26B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D58B8 000D26B8*/ PPC::Runtime::ASM::bl(fn_801097B8);
/*800D58BC 000D26BC*/ PPC::Runtime::ASM::b(.L_800D58E0);
RUNTIME_PPC_JUMP_LABEL(.L_800D58C0, 0x800D58C0) //this is a jump label
/*800D58C0 000D26C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D58C4 000D26C4*/ PPC::Runtime::ASM::bl(fn_80109D74);
/*800D58C8 000D26C8*/ PPC::Runtime::ASM::b(.L_800D58E0);
RUNTIME_PPC_JUMP_LABEL(.L_800D58CC, 0x800D58CC) //this is a jump label
/*800D58CC 000D26CC*/ PPC::Runtime::ASM::li(context->r3, String_ "grlib." Get_MemoryOffset_SDA21);
/*800D58D0 000D26D0*/ PPC::Runtime::ASM::li(context->r4, 0xf41);
/*800D58D4 000D26D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6098 @ Get_MemoryOffset_SDA21);
/*800D58D8 000D26D8*/ PPC::Runtime::ASM::bl(fn___assert);
/*800D58DC 000D26DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D58E0, 0x800D58E0) //this is a jump label
/*800D58E0 000D26E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D58E4 000D26E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D58E8 000D26E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D58EC 000D26EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D58F0 000D26F0*/ PPC::Runtime::ASM::blr();
}