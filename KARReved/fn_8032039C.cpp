//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8032039C(PPC::Runtime::GCContext* context)
{
/*8032039C 0031D19C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803203A0 0031D1A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803203A4 0031D1A4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E15B8 @ Get_MemoryOffset_HighBit);
/*803203A8 0031D1A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803203AC 0031D1AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803203B0 0031D1B0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803203B4 0031D1B4*/ PPC::Runtime::ASM::lwzu(context->r6, lbl_804E15B8 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*803203B8 0031D1B8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803203BC 0031D1BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803203C0 0031D1C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803203C4 0031D1C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803203C8 0031D1C8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803203CC 0031D1CC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803203D0 0031D1D0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803203D4 0031D1D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803203D8 0031D1D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803203DC 0031D1DC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803203E0 0031D1E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803203E4 0031D1E4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803203E8 0031D1E8*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r0);
/*803203EC 0031D1EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803203F0 0031D1F0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803203F4 0031D1F4*/ PPC::Runtime::ASM::b(.L_80320410);
RUNTIME_PPC_JUMP_LABEL(.L_803203F8, 0x803203F8) //this is a jump label
/*803203F8 0031D1F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803203FC 0031D1FC*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x18);
/*80320400 0031D200*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80320404 0031D204*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*80320408 0031D208*/ PPC::Runtime::ASM::nop();
/*8032040C 0031D20C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_80320410, 0x80320410) //this is a jump label
/*80320410 0031D210*/ PPC::Runtime::ASM::cmplw(context->r30, context->r31);
/*80320414 0031D214*/ PPC::Runtime::ASM::bne(.L_803203F8);
/*80320418 0031D218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8032041C 0031D21C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80320420 0031D220*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80320424 0031D224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80320428 0031D228*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8032042C 0031D22C*/ PPC::Runtime::ASM::blr();
}