//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138C1C.hpp"



void fn_8017360C(PPC::Runtime::GCContext* context)
{
/*8017360C 0017040C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80173610 00170410*/ PPC::Runtime::ASM::mflr(context->r0);
/*80173614 00170414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80173618 00170418*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017361C 0017041C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80173620 00170420*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80173624 00170424*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc8, context->r3));
/*80173628 00170428*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017362C 0017042C*/ PPC::Runtime::ASM::beq(.L_80173648);
/*80173630 00170430*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80173634 00170434*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*80173638 00170438*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017363C 0017043C*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80173640 00170440*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80173644 00170444*/ PPC::Runtime::ASM::bl(fn_80138C1C);
RUNTIME_PPC_JUMP_LABEL(.L_80173648, 0x80173648) //this is a jump label
/*80173648 00170448*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017364C 0017044C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80173650 00170450*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80173654 00170454*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80173658 00170458*/ PPC::Runtime::ASM::blr();
}