//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E62F8(PPC::Runtime::GCContext* context)
{
/*802E62F8 002E30F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E62FC 002E30FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E6300 002E3100*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E6304 002E3104*/ PPC::Runtime::ASM::li(context->r5, lbl_805D94D8 @ Get_MemoryOffset_SDA21);
/*802E6308 002E3108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E630C 002E310C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D94D0 @ Get_MemoryOffset_SDA21);
/*802E6310 002E3110*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802E6314 002E3114*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E6318 002E3118*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E631C 002E311C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802E6320 002E3120*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E6324 002E3124*/ PPC::Runtime::ASM::b(.L_802E6360);
RUNTIME_PPC_JUMP_LABEL(.L_802E6328, 0x802E6328) //this is a jump label
/*802E6328 002E3128*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*802E632C 002E312C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802E6330 002E3130*/ PPC::Runtime::ASM::beq(.L_802E6348);
/*802E6334 002E3134*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E6338 002E3138*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E633C 002E313C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r12));
/*802E6340 002E3140*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6344 002E3144*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802E6348, 0x802E6348) //this is a jump label
/*802E6348 002E3148*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E634C 002E314C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E6350 002E3150*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*802E6354 002E3154*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E6358 002E3158*/ PPC::Runtime::ASM::bctrl();
/*802E635C 002E315C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802E6360, 0x802E6360) //this is a jump label
/*802E6360 002E3160*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802E6364 002E3164*/ PPC::Runtime::ASM::bne(.L_802E6328);
/*802E6368 002E3168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E636C 002E316C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E6370 002E3170*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E6374 002E3174*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E6378 002E3178*/ PPC::Runtime::ASM::blr();
}