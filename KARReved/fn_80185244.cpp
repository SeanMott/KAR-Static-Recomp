//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80185244(PPC::Runtime::GCContext* context)
{
/*80185244 00182044*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80185248 00182048*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018524C 0018204C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185250 00182050*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80185254 00182054*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80185258 00182058*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1190, context->r3));
/*8018525C 0018205C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80185260 00182060*/ PPC::Runtime::ASM::beq(.L_8018527C);
/*80185264 00182064*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80185268 00182068*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0EC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018526C 0018206C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80185270 00182070*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80185274 00182074*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80185278 00182078*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_8018527C, 0x8018527C) //this is a jump label
/*8018527C 0018207C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185280 00182080*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80185284 00182084*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185288 00182088*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8018528C 0018208C*/ PPC::Runtime::ASM::blr();
}