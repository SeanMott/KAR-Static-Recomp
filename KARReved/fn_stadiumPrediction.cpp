//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011693C.hpp"
#include "fn_80112044.hpp"
#include "fn_801169FC.hpp"
#include "fn_80114D08.hpp"
#include "fn_801147DC.hpp"
#include "fn_801276C0.hpp"
#include "fn_801276C0.hpp"
#include "fn_80114D08.hpp"
#include "fn_80114E24.hpp"
#include "fn_8000AE50.hpp"
#include "fn_8006176C.hpp"
#include "fn_8011944C.hpp"



void fn_stadiumPrediction(PPC::Runtime::GCContext* context)
{
/*80127864 00124664*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80127868 00124668*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012786C 0012466C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80127870 00124670*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80127874 00124674*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80127878 00124678*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8012787C 0012467C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80127880 00124680*/ PPC::Runtime::ASM::mr(context->r25, context->r5);
/*80127884 00124684*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80127888 00124688*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012788C 0012468C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe8, context->r3));
/*80127890 00124690*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80127894 00124694*/ PPC::Runtime::ASM::beq(.L_8012790C);
/*80127898 00124698*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8012789C 0012469C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801278A0 001246A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*801278A4 001246A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801278A8 001246A8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801278AC 001246AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*801278B0 001246B0*/ PPC::Runtime::ASM::bl(fn_8011693C);
/*801278B4 001246B4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801278B8 001246B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*801278BC 001246BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801278C0 001246C0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801278C4 001246C4*/ PPC::Runtime::ASM::bne(.L_801278EC);
/*801278C8 001246C8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801278CC 001246CC*/ PPC::Runtime::ASM::lis(context->r3, StructValues_84 @ Get_MemoryOffset_HighBit);
/*801278D0 001246D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801278D4 001246D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructValues_84 @ Get_MemoryOffset_LowBit);
/*801278D8 001246D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*801278DC 001246DC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801278E0 001246E0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*801278E4 001246E4*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*801278E8 001246E8*/ PPC::Runtime::ASM::bl(fn_801169FC);
RUNTIME_PPC_JUMP_LABEL(.L_801278EC, 0x801278EC) //this is a jump label
/*801278EC 001246EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe0, context->r31));
/*801278F0 001246F0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*801278F4 001246F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801278F8 001246F8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801278FC 001246FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80127900 00124700*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFF5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80127904 00124704*/ PPC::Runtime::ASM::bl(fn_80114D08);
/*80127908 00124708*/ PPC::Runtime::ASM::b(.L_801279EC);
RUNTIME_PPC_JUMP_LABEL(.L_8012790C, 0x8012790C) //this is a jump label
/*8012790C 0012470C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80127910 00124710*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80127914 00124714*/ PPC::Runtime::ASM::bne(.L_80127920);
/*80127918 00124718*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe0, context->r31));
/*8012791C 0012471C*/ PPC::Runtime::ASM::b(.L_80127924);
RUNTIME_PPC_JUMP_LABEL(.L_80127920, 0x80127920) //this is a jump label
/*80127920 00124720*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80127924, 0x80127924) //this is a jump label
/*80127924 00124724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80127928 00124728*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8012792C 0012472C*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*80127930 00124730*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*80127934 00124734*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80127938 00124738*/ PPC::Runtime::ASM::bl(fn_801147DC);
/*8012793C 0012473C*/ PPC::Runtime::ASM::lis(context->r4, fn_801276C0 @ Get_MemoryOffset_HighBit);
/*80127940 00124740*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80127944 00124744*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80127948 00124748*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8012794C 0012474C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801276C0 @ Get_MemoryOffset_LowBit);
/*80127950 00124750*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80127954 00124754*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80127958 00124758*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8012795C 0012475C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFF58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80127960 00124760*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*80127964 00124764*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFF5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80127968 00124768*/ PPC::Runtime::ASM::bl(fn_80114D08);
/*8012796C 0012476C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80127970 00124770*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*80127974 00124774*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80127978 00124778*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8012797C 0012477C*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*80127980 00124780*/ PPC::Runtime::ASM::cmpwi(context->r29, 0xa);
/*80127984 00124784*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80127988 00124788*/ PPC::Runtime::ASM::bne(.L_801279C4);
/*8012798C 0012478C*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80127990 00124790*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*80127994 00124794*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80127998 00124798*/ PPC::Runtime::ASM::bne(.L_801279AC);
/*8012799C 0012479C*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*801279A0 001247A0*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801279A4 001247A4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x10);
/*801279A8 001247A8*/ PPC::Runtime::ASM::b(.L_801279B8);
RUNTIME_PPC_JUMP_LABEL(.L_801279AC, 0x801279AC) //this is a jump label
/*801279AC 001247AC*/ PPC::Runtime::ASM::bl(fn_8000AE50);
/*801279B0 001247B0*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*801279B4 001247B4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x10);
RUNTIME_PPC_JUMP_LABEL(.L_801279B8, 0x801279B8) //this is a jump label
/*801279B8 001247B8*/ PPC::Runtime::ASM::lis(context->r3, 0x13);
/*801279BC 001247BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x5);
/*801279C0 001247C0*/ PPC::Runtime::ASM::bl(fn_8006176C);
RUNTIME_PPC_JUMP_LABEL(.L_801279C4, 0x801279C4) //this is a jump label
/*801279C4 001247C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801279C8 001247C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*801279CC 001247CC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*801279D0 001247D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*801279D4 001247D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801279D8 001247D8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801279DC 001247DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801279E0 001247E0*/ PPC::Runtime::ASM::blt(.L_801279E8);
/*801279E4 001247E4*/ PPC::Runtime::ASM::bl(fn_8011944C);
RUNTIME_PPC_JUMP_LABEL(.L_801279E8, 0x801279E8) //this is a jump label
/*801279E8 001247E8*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801279EC, 0x801279EC) //this is a jump label
/*801279EC 001247EC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801279F0 001247F0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*801279F4 001247F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801279F8 001247F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801279FC 001247FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80127A00 00124800*/ PPC::Runtime::ASM::blr();
}