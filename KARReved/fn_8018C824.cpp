//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80189D1C.hpp"



void fn_8018C824(PPC::Runtime::GCContext* context)
{
/*8018C824 00189624*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8018C828 00189628*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018C82C 0018962C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018C830 00189630*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018C834 00189634*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018C838 00189638*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018C83C 0018963C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018C840 00189640*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8018C844 00189644*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/* 8018C848 00189648  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*8018C84C 0018964C*/ PPC::Runtime::ASM::beq(.L_8018C8A4);
/*8018C850 00189650*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8018C854 00189654*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8018C858 00189658*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*8018C85C 0018965C*/ PPC::Runtime::ASM::b(.L_8018C888);
RUNTIME_PPC_JUMP_LABEL(.L_8018C860, 0x8018C860) //this is a jump label
/*8018C860 00189660*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*8018C864 00189664*/ PPC::Runtime::ASM::slw(context->r0, context->r31, context->r29);
/*8018C868 00189668*/ PPC::Runtime::ASM::extrwi(context->r3, context->r3, 8, 22);
/*8018C86C 0018966C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*8018C870 00189670*/ PPC::Runtime::ASM::bne(.L_8018C880);
/*8018C874 00189674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8018C878 00189678*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r30);
/*8018C87C 0018967C*/ PPC::Runtime::ASM::bl(fn_80189D1C);
RUNTIME_PPC_JUMP_LABEL(.L_8018C880, 0x8018C880) //this is a jump label
/*8018C880 00189680*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc8);
/*8018C884 00189684*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8018C888, 0x8018C888) //this is a jump label
/*8018C888 00189688*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8018C88C 0018968C*/ PPC::Runtime::ASM::cmpw(context->r29, context->r0);
/*8018C890 00189690*/ PPC::Runtime::ASM::blt(.L_8018C860);
/*8018C894 00189694*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*8018C898 00189698*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8018C89C 0018969C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*8018C8A0 001896A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8018C8A4, 0x8018C8A4) //this is a jump label
/*8018C8A4 001896A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018C8A8 001896A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018C8AC 001896AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8018C8B0 001896B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018C8B4 001896B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018C8B8 001896B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018C8BC 001896BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8018C8C0 001896C0*/ PPC::Runtime::ASM::blr();
}