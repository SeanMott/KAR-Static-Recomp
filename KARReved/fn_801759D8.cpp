//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800550BC.hpp"
#include "fn_8017690C.hpp"
#include "fn_801778B0.hpp"
#include "fn_80172294.hpp"
#include "fn_80144A1C.hpp"
#include "fn_80146A90.hpp"
#include "fn_801774A0.hpp"



void fn_801759D8(PPC::Runtime::GCContext* context)
{
/*801759D8 001727D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801759DC 001727DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801759E0 001727E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801759E4 001727E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801759E8 001727E8*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*801759EC 001727EC*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*801759F0 001727F0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801759F4 001727F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd8, context->r3));
/*801759F8 001727F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801759FC 001727FC*/ PPC::Runtime::ASM::beq(.L_80175AFC);
/*80175A00 00172800*/ PPC::Runtime::ASM::extsb(context->r0, context->r26);
/*80175A04 00172804*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80175A08 00172808*/ PPC::Runtime::ASM::mulli(context->r30, context->r0, 0x78);
/*80175A0C 0017280C*/ PPC::Runtime::ASM::add(context->r31, context->r27, context->r30);
/*80175A10 00172810*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*80175A14 00172814*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80175A18 00172818*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80175A1C 0017281C*/ PPC::Runtime::ASM::beq(.L_80175AF4);
/*80175A20 00172820*/ PPC::Runtime::ASM::bge(.L_80175AFC);
/*80175A24 00172824*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80175A28 00172828*/ PPC::Runtime::ASM::bge(.L_80175A34);
/*80175A2C 0017282C*/ PPC::Runtime::ASM::b(.L_80175AFC);
/*80175A30 00172830*/ PPC::Runtime::ASM::b(.L_80175AFC);
RUNTIME_PPC_JUMP_LABEL(.L_80175A34, 0x80175A34) //this is a jump label
/*80175A34 00172834*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80175A38 00172838*/ PPC::Runtime::ASM::li(context->r0, 0x80);
/*80175A3C 0017283C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r31));
/*80175A40 00172840*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175A44 00172844*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r31));
/*80175A48 00172848*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80175A4C 0017284C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*80175A50 00172850*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175A54 00172854*/ PPC::Runtime::ASM::mr(context->r29, context->r31);
/*80175A58 00172858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80175A5C 0017285C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*80175A60 00172860*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175A64 00172864*/ PPC::Runtime::ASM::mr(context->r28, context->r31);
/*80175A68 00172868*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80175A6C 0017286C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80175A70 00172870*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80175A74 00172874*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175A78 00172878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80175A7C 0017287C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80175A80 00172880*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80175A84 00172884*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175A88 00172888*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80175A8C 0017288C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80175A90 00172890*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80175A94 00172894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80175A98 00172898*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80175A9C 0017289C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80175AA0 001728A0*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80175AA4 001728A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80175AA8 001728A8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*80175AAC 001728AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*80175AB0 001728B0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*80175AB4 001728B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80175AB8 001728B8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80175ABC 001728BC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80175AC0 001728C0*/ PPC::Runtime::ASM::bl(fn_8017690C);
/*80175AC4 001728C4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80175AC8 001728C8*/ PPC::Runtime::ASM::bl(fn_801778B0);
/*80175ACC 001728CC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80175AD0 001728D0*/ PPC::Runtime::ASM::bl(fn_80172294);
/*80175AD4 001728D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80175AD8 001728D8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80175ADC 001728DC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80175AE0 001728E0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80175AE4 001728E4*/ PPC::Runtime::ASM::bl(fn_80144A1C);
/*80175AE8 001728E8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80175AEC 001728EC*/ PPC::Runtime::ASM::bl(fn_80146A90);
/*80175AF0 001728F0*/ PPC::Runtime::ASM::b(.L_80175AFC);
RUNTIME_PPC_JUMP_LABEL(.L_80175AF4, 0x80175AF4) //this is a jump label
/*80175AF4 001728F4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80175AF8 001728F8*/ PPC::Runtime::ASM::bl(fn_801774A0);
RUNTIME_PPC_JUMP_LABEL(.L_80175AFC, 0x80175AFC) //this is a jump label
/*80175AFC 001728FC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80175B00 00172900*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80175B04 00172904*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80175B08 00172908*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80175B0C 0017290C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80175B10 00172910*/ PPC::Runtime::ASM::blr();
}