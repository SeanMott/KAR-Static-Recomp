//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_80072C90.hpp"
#include "fn_80072C90.hpp"
#include "fn_802358C4.hpp"
#include "fn_stGetStageKind_30city?.hpp"
#include "fn_80072C90.hpp"



void fn_800CE964(PPC::Runtime::GCContext* context)
{
/*800CE964 000CB764*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800CE968 000CB768*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CE96C 000CB76C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CE970 000CB770*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CE974 000CB774*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CE978 000CB778*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE97C 000CB77C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800CE980 000CB780*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*800CE984 000CB784*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800CE988 000CB788*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CE98C 000CB78C*/ PPC::Runtime::ASM::mulli(context->r31, context->r30, 0x14);
/*800CE990 000CB790*/ PPC::Runtime::ASM::lis(context->r3, StructValues_String_6_CourseDatsAndSymbolData @ Get_MemoryOffset_HighBit);
/*800CE994 000CB794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CE998 000CB798*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE99C 000CB79C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, StructValues_String_6_CourseDatsAndSymbolData @ Get_MemoryOffset_LowBit);
/*800CE9A0 000CB7A0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r31);
/*800CE9A4 000CB7A4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800CE9A8 000CB7A8*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800CE9AC 000CB7AC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800CE9B0 000CB7B0*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*800CE9B4 000CB7B4*/ PPC::Runtime::ASM::li(context->r9, 0x8);
/*800CE9B8 000CB7B8*/ PPC::Runtime::ASM::li(context->r10, 0x10);
/*800CE9BC 000CB7BC*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*800CE9C0 000CB7C0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800CE9C4 000CB7C4*/ PPC::Runtime::ASM::lis(context->r3, StructValues_String_6_CourseDatsAndSymbolData @ Get_MemoryOffset_HighBit);
/*800CE9C8 000CB7C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, StructValues_String_6_CourseDatsAndSymbolData @ Get_MemoryOffset_LowBit);
/*800CE9CC 000CB7CC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CE9D0 000CB7D0*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r31);
/*800CE9D4 000CB7D4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800CE9D8 000CB7D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800CE9DC 000CB7DC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE9E0 000CB7E0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800CE9E4 000CB7E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800CE9E8 000CB7E8*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*800CE9EC 000CB7EC*/ PPC::Runtime::ASM::li(context->r9, 0x8);
/*800CE9F0 000CB7F0*/ PPC::Runtime::ASM::li(context->r10, 0x10);
/*800CE9F4 000CB7F4*/ PPC::Runtime::ASM::bl(fn_80072C90);
/*800CE9F8 000CB7F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800CE9FC 000CB7FC*/ PPC::Runtime::ASM::bl(fn_802358C4);
/*800CEA00 000CB800*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800CEA04 000CB804*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_30city?);
/*800CEA08 000CB808*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800CEA0C 000CB80C*/ PPC::Runtime::ASM::beq(.L_800CEA40);
/*800CEA10 000CB810*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CEA14 000CB814*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_895 @ Get_MemoryOffset_HighBit);
/*800CEA18 000CB818*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CEA1C 000CB81C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_895 @ Get_MemoryOffset_LowBit);
/*800CEA20 000CB820*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800CEA24 000CB824*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CEA28 000CB828*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800CEA2C 000CB82C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800CEA30 000CB830*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*800CEA34 000CB834*/ PPC::Runtime::ASM::li(context->r9, 0x8);
/*800CEA38 000CB838*/ PPC::Runtime::ASM::li(context->r10, 0x10);
/*800CEA3C 000CB83C*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_800CEA40, 0x800CEA40) //this is a jump label
/*800CEA40 000CB840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CEA44 000CB844*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CEA48 000CB848*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800CEA4C 000CB84C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CEA50 000CB850*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CEA54 000CB854*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800CEA58 000CB858*/ PPC::Runtime::ASM::blr();
}