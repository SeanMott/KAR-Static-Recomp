//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802342F8.hpp"
#include "fn_8023EEA0.hpp"



void fn_80236B38(PPC::Runtime::GCContext* context)
{
/*80236B38 00233938*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80236B3C 0023393C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80236B40 00233940*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80236B44 00233944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80236B48 00233948*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80236B4C 0023394C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80236B50 00233950*/ PPC::Runtime::ASM::bl(fn_802342F8);
/*80236B54 00233954*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80236B58 00233958*/ PPC::Runtime::ASM::beq(.L_80236B88);
/*80236B5C 0023395C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80236B60 00233960*/ PPC::Runtime::ASM::subis(context->r0, context->r4, 0x3);
/*80236B64 00233964*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xa98a);
/*80236B68 00233968*/ PPC::Runtime::ASM::bne(.L_80236B88);
/*80236B6C 0023396C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80236B70 00233970*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80236B74 00233974*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80236B78 00233978*/ PPC::Runtime::ASM::beq(.L_80236B88);
/*80236B7C 0023397C*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*80236B80 00233980*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80236B84 00233984*/ PPC::Runtime::ASM::bl(fn_8023EEA0);
RUNTIME_PPC_JUMP_LABEL(.L_80236B88, 0x80236B88) //this is a jump label
/*80236B88 00233988*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80236B8C 0023398C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80236B90 00233990*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80236B94 00233994*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80236B98 00233998*/ PPC::Runtime::ASM::blr();
}