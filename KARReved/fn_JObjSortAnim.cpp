//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_JObjSortAnim(PPC::Runtime::GCContext* context)
{
/*804092E8 004060E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804092EC 004060EC*/ PPC::Runtime::ASM::beqlr();
/*804092F0 004060F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*804092F4 004060F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804092F8 004060F8*/ PPC::Runtime::ASM::bne(.L_80409300);
/*804092FC 004060FC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80409300, 0x80409300) //this is a jump label
/*80409300 00406100*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x14);
/*80409304 00406104*/ PPC::Runtime::ASM::b(.L_80409330);
RUNTIME_PPC_JUMP_LABEL(.L_80409308, 0x80409308) //this is a jump label
/*80409308 00406108*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r4));
/*8040930C 0040610C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xc);
/*80409310 00406110*/ PPC::Runtime::ASM::bne(.L_8040932C);
/*80409314 00406114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80409318 00406118*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8040931C 0040611C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80409320 00406120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80409324 00406124*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80409328 00406128*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8040932C, 0x8040932C) //this is a jump label
/*8040932C 0040612C*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_80409330, 0x80409330) //this is a jump label
/*80409330 00406130*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80409334 00406134*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80409338 00406138*/ PPC::Runtime::ASM::bne(.L_80409308);
/*8040933C 0040613C*/ PPC::Runtime::ASM::blr();
}