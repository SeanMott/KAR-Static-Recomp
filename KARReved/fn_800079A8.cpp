//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_8004A2BC.hpp"
#include "fn_80028754.hpp"
#include "fn_8003C070.hpp"
#include "memset.hpp"
#include "fn_8004A2BC.hpp"
#include "fn_8002CFD8.hpp"
#include "fn_8003D03C.hpp"
#include "memset.hpp"
#include "fn_8004A2BC.hpp"
#include "fn_8000C148.hpp"
#include "fn_80007F6C.hpp"
#include "fn_800080C0.hpp"
#include "fn_80038C40.hpp"
#include "fn_80046D48.hpp"
#include "fn_80041664.hpp"
#include "fn_80041740.hpp"
#include "fn_800418F4.hpp"



void fn_800079A8(PPC::Runtime::GCContext* context)
{
/*800079A8 000047A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800079AC 000047AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800079B0 000047B0*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*800079B4 000047B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800079B8 000047B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800079BC 000047BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*800079C0 000047C0*/ PPC::Runtime::ASM::li(context->r5, 0x118);
/*800079C4 000047C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800079C8 000047C8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800079CC 000047CC*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xd68);
/*800079D0 000047D0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800079D4 000047D4*/ PPC::Runtime::ASM::bl(memset);
/*800079D8 000047D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800079DC 000047DC*/ PPC::Runtime::ASM::bl(fn_8004A2BC);
/*800079E0 000047E0*/ PPC::Runtime::ASM::bl(fn_80028754);
/*800079E4 000047E4*/ PPC::Runtime::ASM::bl(fn_8003C070);
/*800079E8 000047E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*800079EC 000047EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800079F0 000047F0*/ PPC::Runtime::ASM::li(context->r5, 0x128);
/*800079F4 000047F4*/ PPC::Runtime::ASM::bl(memset);
/*800079F8 000047F8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800079FC 000047FC*/ PPC::Runtime::ASM::bl(fn_8004A2BC);
/*80007A00 00004800*/ PPC::Runtime::ASM::bl(fn_8002CFD8);
/*80007A04 00004804*/ PPC::Runtime::ASM::bl(fn_8003D03C);
/*80007A08 00004808*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80007A0C 0000480C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80007A10 00004810*/ PPC::Runtime::ASM::addi(context->r7, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80007A14 00004814*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80007A18 00004818*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x37b, context->r7));
/*80007A1C 0000481C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x240);
/*80007A20 00004820*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80007A24 00004824*/ PPC::Runtime::ASM::li(context->r5, 0x114);
/*80007A28 00004828*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x377, context->r7));
/*80007A2C 0000482C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r7));
/*80007A30 00004830*/ PPC::Runtime::ASM::bl(memset);
/*80007A34 00004834*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80007A38 00004838*/ PPC::Runtime::ASM::bl(fn_8004A2BC);
/*80007A3C 0000483C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80007A40, 0x80007A40) //this is a jump label
/*80007A40 00004840*/ PPC::Runtime::ASM::extsb(context->r3, context->r31);
/*80007A44 00004844*/ PPC::Runtime::ASM::bl(fn_8000C148);
/*80007A48 00004848*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80007A4C 0000484C*/ PPC::Runtime::ASM::bne(.L_80007A68);
/*80007A50 00004850*/ PPC::Runtime::ASM::extsb(context->r3, context->r31);
/*80007A54 00004854*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80007A58 00004858*/ PPC::Runtime::ASM::bl(fn_80007F6C);
/*80007A5C 0000485C*/ PPC::Runtime::ASM::extsb(context->r3, context->r31);
/*80007A60 00004860*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80007A64 00004864*/ PPC::Runtime::ASM::bl(fn_800080C0);
RUNTIME_PPC_JUMP_LABEL(.L_80007A68, 0x80007A68) //this is a jump label
/*80007A68 00004868*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80007A6C 0000486C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x18);
/*80007A70 00004870*/ PPC::Runtime::ASM::blt(.L_80007A40);
/*80007A74 00004874*/ PPC::Runtime::ASM::bl(fn_80038C40);
/*80007A78 00004878*/ PPC::Runtime::ASM::bl(fn_80046D48);
/*80007A7C 0000487C*/ PPC::Runtime::ASM::bl(fn_80041664);
/*80007A80 00004880*/ PPC::Runtime::ASM::bl(fn_80041740);
/*80007A84 00004884*/ PPC::Runtime::ASM::bl(fn_800418F4);
/*80007A88 00004888*/ PPC::Runtime::ASM::li(context->r0, 0x221);
/*80007A8C 0000488C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7a8, context->r30));
/*80007A90 00004890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ac, context->r30));
/*80007A94 00004894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80007A98 00004898*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80007A9C 0000489C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80007AA0 000048A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80007AA4 000048A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80007AA8 000048A8*/ PPC::Runtime::ASM::blr();
}