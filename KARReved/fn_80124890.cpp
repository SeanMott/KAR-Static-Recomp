//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011500C.hpp"
#include "fn_8011500C.hpp"
#include "fn_80052FB8.hpp"
#include "fn_80124840.hpp"
#include "fn_80124840.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_grGetGroundMinimapScale.hpp"



void fn_80124890(PPC::Runtime::GCContext* context)
{
/*80124890 00121690*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80124894 00121694*/ PPC::Runtime::ASM::mflr(context->r0);
/*80124898 00121698*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8012489C 0012169C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801248A0 001216A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801248A4 001216A4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801248A8 001216A8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801248AC 001216AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801248B0 001216B0*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*801248B4 001216B4*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*801248B8 001216B8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801248BC 001216BC*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*801248C0 001216C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x330, context->r31));
/*801248C4 001216C4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801248C8 001216C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801248CC 001216CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801248D0 001216D0*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801248D4 001216D4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801248D8 001216D8*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801248DC 001216DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801248E0 001216E0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*801248E4 001216E4*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*801248E8 001216E8*/ PPC::Runtime::ASM::lis(context->r4, fn_8011500C @ Get_MemoryOffset_HighBit);
/*801248EC 001216EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801248F0 001216F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011500C @ Get_MemoryOffset_LowBit);
/*801248F4 001216F4*/ PPC::Runtime::ASM::li(context->r5, 0x13);
/*801248F8 001216F8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801248FC 001216FC*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*80124900 00121700*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80124904 00121704*/ PPC::Runtime::ASM::lis(context->r4, 0x2800);
/*80124908 00121708*/ PPC::Runtime::ASM::bl(fn_80052FB8);
/*8012490C 0012170C*/ PPC::Runtime::ASM::lis(context->r4, fn_80124840 @ Get_MemoryOffset_HighBit);
/*80124910 00121710*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80124914 00121714*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80124840 @ Get_MemoryOffset_LowBit);
/*80124918 00121718*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8012491C 0012171C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80124920 00121720*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFEC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80124924 00121724*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80124928 00121728*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x330, context->r31));
/*8012492C 0012172C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80124930 00121730*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80124934 00121734*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*80124938 00121738*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012493C 0012173C*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*80124940 00121740*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80124944 00121744*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80124948 00121748*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*8012494C 0012174C*/ PPC::Runtime::ASM::bl(fn_grGetGroundMinimapScale);
/*80124950 00121750*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFEC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80124954 00121754*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80124958 00121758*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFEC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012495C 0012175C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f2);
/*80124960 00121760*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80124964 00121764*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80124968 00121768*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012496C 0012176C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124970 00121770*/ PPC::Runtime::ASM::bne(.L_80124984);
/*80124974 00121774*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64B8 @ Get_MemoryOffset_SDA21);
/*80124978 00121778*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8012497C 0012177C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64C0 @ Get_MemoryOffset_SDA21);
/*80124980 00121780*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80124984, 0x80124984) //this is a jump label
/*80124984 00121784*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124988 00121788*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012498C 0012178C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80124990 00121790*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80124994 00121794*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80124998 00121798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8012499C 0012179C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801249A0 001217A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801249A4 001217A4*/ PPC::Runtime::ASM::bne(.L_801249F0);
/*801249A8 001217A8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801249AC 001217AC*/ PPC::Runtime::ASM::beq(.L_801249F0);
/*801249B0 001217B0*/ PPC::Runtime::ASM::bne(.L_801249C4);
/*801249B4 001217B4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64B8 @ Get_MemoryOffset_SDA21);
/*801249B8 001217B8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801249BC 001217BC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64C0 @ Get_MemoryOffset_SDA21);
/*801249C0 001217C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801249C4, 0x801249C4) //this is a jump label
/*801249C4 001217C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801249C8 001217C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801249CC 001217CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801249D0 001217D0*/ PPC::Runtime::ASM::bne(.L_801249E0);
/*801249D4 001217D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801249D8 001217D8*/ PPC::Runtime::ASM::beq(.L_801249E0);
/*801249DC 001217DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801249E0, 0x801249E0) //this is a jump label
/*801249E0 001217E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801249E4 001217E4*/ PPC::Runtime::ASM::bne(.L_801249F0);
/*801249E8 001217E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801249EC 001217EC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801249F0, 0x801249F0) //this is a jump label
/*801249F0 001217F0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801249F4 001217F4*/ PPC::Runtime::ASM::bne(.L_80124A08);
/*801249F8 001217F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64B8 @ Get_MemoryOffset_SDA21);
/*801249FC 001217FC*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80124A00 00121800*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64C0 @ Get_MemoryOffset_SDA21);
/*80124A04 00121804*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80124A08, 0x80124A08) //this is a jump label
/*80124A08 00121808*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80124A0C 0012180C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80124A10 00121810*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80124A14 00121814*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80124A18 00121818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80124A1C 0012181C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80124A20 00121820*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80124A24 00121824*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFECC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80124A28 00121828*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80124A2C 0012182C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFED0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80124A30 00121830*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*80124A34 00121834*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124A38 00121838*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80124A3C 0012183C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80124A40 00121840*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80124A44 00121844*/ PPC::Runtime::ASM::bne(.L_80124A58);
/*80124A48 00121848*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64B8 @ Get_MemoryOffset_SDA21);
/*80124A4C 0012184C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80124A50 00121850*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64C0 @ Get_MemoryOffset_SDA21);
/*80124A54 00121854*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80124A58, 0x80124A58) //this is a jump label
/*80124A58 00121858*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80124A5C 0012185C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124A60 00121860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*80124A64 00121864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80124A68 00121868*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*80124A6C 0012186C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*80124A70 00121870*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80124A74 00121874*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80124A78 00121878*/ PPC::Runtime::ASM::bne(.L_80124AC4);
/*80124A7C 0012187C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80124A80 00121880*/ PPC::Runtime::ASM::beq(.L_80124AC4);
/*80124A84 00121884*/ PPC::Runtime::ASM::bne(.L_80124A98);
/*80124A88 00121888*/ PPC::Runtime::ASM::li(context->r3, lbl_805D64B8 @ Get_MemoryOffset_SDA21);
/*80124A8C 0012188C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80124A90 00121890*/ PPC::Runtime::ASM::li(context->r5, lbl_805D64C0 @ Get_MemoryOffset_SDA21);
/*80124A94 00121894*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80124A98, 0x80124A98) //this is a jump label
/*80124A98 00121898*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80124A9C 0012189C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80124AA0 001218A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80124AA4 001218A4*/ PPC::Runtime::ASM::bne(.L_80124AB4);
/*80124AA8 001218A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80124AAC 001218AC*/ PPC::Runtime::ASM::beq(.L_80124AB4);
/*80124AB0 001218B0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80124AB4, 0x80124AB4) //this is a jump label
/*80124AB4 001218B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80124AB8 001218B8*/ PPC::Runtime::ASM::bne(.L_80124AC4);
/*80124ABC 001218BC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80124AC0 001218C0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80124AC4, 0x80124AC4) //this is a jump label
/*80124AC4 001218C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r31));
/*80124AC8 001218C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80124ACC 001218CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80124AD0 001218D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80124AD4 001218D4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80124AD8 001218D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80124ADC 001218DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80124AE0 001218E0*/ PPC::Runtime::ASM::blr();
}