//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80064B68(PPC::Runtime::GCContext* context)
{
/*80064B68 00061968*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80064B6C 0006196C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80064B70 00061970*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80064B74 00061974*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f1);
/*80064B78 00061978*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80064B7C 0006197C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80064B80 00061980*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80064B84 00061984*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80064B88 00061988*/ PPC::Runtime::ASM::fmadds(context->f3, context->f4, context->f6, context->f2);
/*80064B8C 0006198C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f1, context->f0);
/*80064B90 00061990*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80064B94 00061994*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80064B98 00061998*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80064B9C 0006199C*/ PPC::Runtime::ASM::fmadds(context->f3, context->f5, context->f0, context->f3);
/*80064BA0 000619A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEA50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064BA4 000619A4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f5, context->f2, context->f1);
/*80064BA8 000619A8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f3, context->f1);
/*80064BAC 000619AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80064BB0 000619B0*/ PPC::Runtime::ASM::bge(.L_80064BBC);
/*80064BB4 000619B4*/ PPC::Runtime::ASM::fneg(context->f2, context->f1);
/*80064BB8 000619B8*/ PPC::Runtime::ASM::b(.L_80064BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80064BBC, 0x80064BBC) //this is a jump label
/*80064BBC 000619BC*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80064BC0, 0x80064BC0) //this is a jump label
/*80064BC0 000619C0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEA74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80064BC4 000619C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80064BC8 000619C8*/ PPC::Runtime::ASM::bge(.L_80064BE8);
/*80064BCC 000619CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80064BD0 000619D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80064BD4 000619D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80064BD8 000619D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80064BDC 000619DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80064BE0 000619E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80064BE4 000619E4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80064BE8, 0x80064BE8) //this is a jump label
/*80064BE8 000619E8*/ PPC::Runtime::ASM::fneg(context->f3, context->f1);
/*80064BEC 000619EC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f3, context->f6);
/*80064BF0 000619F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80064BF4 000619F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80064BF8 000619F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80064BFC 000619FC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f3, context->f0);
/*80064C00 00061A00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80064C04 00061A04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80064C08 00061A08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80064C0C 00061A0C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f3, context->f0);
/*80064C10 00061A10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80064C14 00061A14*/ PPC::Runtime::ASM::blr();
}