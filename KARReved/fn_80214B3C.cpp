//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_80208008.hpp"
#include "fn_80214B88.hpp"



void fn_80214B3C(PPC::Runtime::GCContext* context)
{
/*80214B3C 0021193C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80214B40 00211940*/ PPC::Runtime::ASM::mflr(context->r0);
/*80214B44 00211944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214B48 00211948*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80214B4C 0021194C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80214B50 00211950*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*80214B54 00211954*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80214B58 00211958*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*80214B5C 0021195C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80214B60 00211960*/ PPC::Runtime::ASM::bl(fn_80208008);
/*80214B64 00211964*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80214B68 00211968*/ PPC::Runtime::ASM::beq(.L_80214B74);
/*80214B6C 0021196C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80214B70 00211970*/ PPC::Runtime::ASM::bl(fn_80214B88);
RUNTIME_PPC_JUMP_LABEL(.L_80214B74, 0x80214B74) //this is a jump label
/*80214B74 00211974*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214B78 00211978*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80214B7C 0021197C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80214B80 00211980*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80214B84 00211984*/ PPC::Runtime::ASM::blr();
}