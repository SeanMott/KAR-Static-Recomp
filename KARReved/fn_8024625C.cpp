//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802433C4.hpp"



void fn_8024625C(PPC::Runtime::GCContext* context)
{
/*8024625C 0024305C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80246260 00243060*/ PPC::Runtime::ASM::mflr(context->r0);
/*80246264 00243064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80246268 00243068*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8024626C 0024306C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80246270 00243070*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80246274 00243074*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80246278 00243078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*8024627C 0024307C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80246280 00243080*/ PPC::Runtime::ASM::beq(.L_8024629C);
/*80246284 00243084*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B57D8 @ Get_MemoryOffset_HighBit);
/*80246288 00243088*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B57E4 @ Get_MemoryOffset_HighBit);
/*8024628C 0024308C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B57D8 @ Get_MemoryOffset_LowBit);
/*80246290 00243090*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*80246294 00243094*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B57E4 @ Get_MemoryOffset_LowBit);
/*80246298 00243098*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024629C, 0x8024629C) //this is a jump label
/*8024629C 0024309C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*802462A0 002430A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802462A4 002430A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2BC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802462A8 002430A8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*802462AC 002430AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/*802462B0 002430B0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0xc);
/*802462B4 002430B4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802462B8 002430B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802462BC 002430BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*802462C0 002430C0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802462C4 002430C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802462C8 002430C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r4));
/*802462CC 002430CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802462D0 002430D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802462D4 002430D4*/ PPC::Runtime::ASM::bl(fn_802433C4);
/*802462D8 002430D8*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*802462DC 002430DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802462E0 002430E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802462E4 002430E4*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*802462E8 002430E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802462EC 002430EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802462F0 002430F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802462F4 002430F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802462F8 002430F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*802462FC 002430FC*/ PPC::Runtime::ASM::blr();
}