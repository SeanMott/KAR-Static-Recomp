//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E6280(PPC::Runtime::GCContext* context)
{
/*802E6280 002E3080*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E6284 002E3084*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E6288 002E3088*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802E628C 002E308C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D94D8 @ Get_MemoryOffset_SDA21);
/*802E6290 002E3090*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E6294 002E3094*/ PPC::Runtime::ASM::li(context->r6, lbl_805D94D0 @ Get_MemoryOffset_SDA21);
/*802E6298 002E3098*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802E629C 002E309C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E62A0 002E30A0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA1C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E62A4 002E30A4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802E62A8 002E30A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E62AC 002E30AC*/ PPC::Runtime::ASM::b(.L_802E62DC);
RUNTIME_PPC_JUMP_LABEL(.L_802E62B0, 0x802E62B0) //this is a jump label
/*802E62B0 002E30B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E62B4 002E30B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E62B8 002E30B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802E62BC 002E30BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E62C0 002E30C0*/ PPC::Runtime::ASM::bctrl();
/*802E62C4 002E30C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802E62C8 002E30C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802E62CC 002E30CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*802E62D0 002E30D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E62D4 002E30D4*/ PPC::Runtime::ASM::bctrl();
/*802E62D8 002E30D8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802E62DC, 0x802E62DC) //this is a jump label
/*802E62DC 002E30DC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802E62E0 002E30E0*/ PPC::Runtime::ASM::bne(.L_802E62B0);
/*802E62E4 002E30E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E62E8 002E30E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E62EC 002E30EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E62F0 002E30F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E62F4 002E30F4*/ PPC::Runtime::ASM::blr();
}