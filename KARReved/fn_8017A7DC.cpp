//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80179414.hpp"



void fn_8017A7DC(PPC::Runtime::GCContext* context)
{
/*8017A7DC 001775DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8017A7E0 001775E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017A7E4 001775E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017A7E8 001775E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017A7EC 001775EC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017A7F0 001775F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe9c, context->r3));
/*8017A7F4 001775F4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017A7F8 001775F8*/ PPC::Runtime::ASM::beq(.L_8017A8A4);
/*8017A7FC 001775FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8017A800 00177600*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8017A804 00177604*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8017A808 00177608*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r5));
/*8017A80C 0017760C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8017A810 00177610*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r5));
/*8017A814 00177614*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r5));
/*8017A818 00177618*/ PPC::Runtime::ASM::bl(fn_80179414);
/*8017A81C 0017761C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8017A820 00177620*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017A824 00177624*/ PPC::Runtime::ASM::bne(.L_8017A838);
/*8017A828 00177628*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DB0 @ Get_MemoryOffset_SDA21);
/*8017A82C 0017762C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8017A830 00177630*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DB8 @ Get_MemoryOffset_SDA21);
/*8017A834 00177634*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017A838, 0x8017A838) //this is a jump label
/*8017A838 00177638*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017A83C 0017763C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017A840 00177640*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8017A844 00177644*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8017A848 00177648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8017A84C 0017764C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8017A850 00177650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017A854 00177654*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8017A858 00177658*/ PPC::Runtime::ASM::bne(.L_8017A8A4);
/*8017A85C 0017765C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017A860 00177660*/ PPC::Runtime::ASM::beq(.L_8017A8A4);
/*8017A864 00177664*/ PPC::Runtime::ASM::bne(.L_8017A878);
/*8017A868 00177668*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DB0 @ Get_MemoryOffset_SDA21);
/*8017A86C 0017766C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8017A870 00177670*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DB8 @ Get_MemoryOffset_SDA21);
/*8017A874 00177674*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017A878, 0x8017A878) //this is a jump label
/*8017A878 00177678*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8017A87C 0017767C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8017A880 00177680*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8017A884 00177684*/ PPC::Runtime::ASM::bne(.L_8017A894);
/*8017A888 00177688*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8017A88C 0017768C*/ PPC::Runtime::ASM::beq(.L_8017A894);
/*8017A890 00177690*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8017A894, 0x8017A894) //this is a jump label
/*8017A894 00177694*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8017A898 00177698*/ PPC::Runtime::ASM::bne(.L_8017A8A4);
/*8017A89C 0017769C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8017A8A0 001776A0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8017A8A4, 0x8017A8A4) //this is a jump label
/*8017A8A4 001776A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017A8A8 001776A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017A8AC 001776AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017A8B0 001776B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8017A8B4 001776B4*/ PPC::Runtime::ASM::blr();
}