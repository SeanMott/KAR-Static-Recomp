//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A6428.hpp"
#include "fn_80196DF4.hpp"
#include "fn_800550F4.hpp"
#include "fn_80198910.hpp"
#include "fn_800550F4.hpp"



void fn_ability_Tornado_giveHat(PPC::Runtime::GCContext* context)
{
/*801A7944 001A4744*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A7948 001A4748*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A794C 001A474C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7950 001A4750*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A7954 001A4754*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A7958 001A4758*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A795C 001A475C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r3));
/*801A7960 001A4760*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A7964 001A4764*/ PPC::Runtime::ASM::bne(.L_801A7A44);
/*801A7968 001A4768*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801A796C 001A476C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559EE8 @ Get_MemoryOffset_HighBit);
/*801A7970 001A4770*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559EE8 @ Get_MemoryOffset_LowBit);
/*801A7974 001A4774*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A7978 001A4778*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A797C 001A477C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801A7980 001A4780*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r30));
/*801A7984 001A4784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801A7988 001A4788*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801A798C 001A478C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7990 001A4790*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A7994 001A4794*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A7998 001A4798*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A799C 001A479C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A79A0 001A47A0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A79A4 001A47A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A79A8 001A47A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A79AC 001A47AC*/ PPC::Runtime::ASM::bl(fn_801A6428);
/*801A79B0 001A47B0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*801A79B4 001A47B4*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x910);
/*801A79B8 001A47B8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A79BC 001A47BC*/ PPC::Runtime::ASM::bl(fn_80196DF4);
/*801A79C0 001A47C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801A79C4 001A47C4*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801A79C8 001A47C8*/ PPC::Runtime::ASM::beq(.L_801A7A00);
/*801A79CC 001A47CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A79D0 001A47D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A79D4 001A47D4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A79D8 001A47D8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A79DC 001A47DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A79E0 001A47E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A79E4 001A47E4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A79E8 001A47E8*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A79EC 001A47EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A79F0 001A47F0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801A79F4 001A47F4*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A79F8 001A47F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A79FC 001A47FC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A7A00, 0x801A7A00) //this is a jump label
/*801A7A00 001A4800*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*801A7A04 001A4804*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7A08 001A4808*/ PPC::Runtime::ASM::bl(fn_80198910);
/*801A7A0C 001A480C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7A10 001A4810*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A7A14 001A4814*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A7A18 001A4818*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A7A1C 001A481C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A7A20 001A4820*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7A24 001A4824*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A7A28 001A4828*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A7A2C 001A482C*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A7A30 001A4830*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7A34 001A4834*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*801A7A38 001A4838*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A7A3C 001A483C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7A40 001A4840*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A7A44, 0x801A7A44) //this is a jump label
/*801A7A44 001A4844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7A48 001A4848*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A7A4C 001A484C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A7A50 001A4850*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A7A54 001A4854*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A7A58 001A4858*/ PPC::Runtime::ASM::blr();
}