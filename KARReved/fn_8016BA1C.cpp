//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016D8A8.hpp"
#include "fn_8016E7C4.hpp"
#include "fn_8016DD88.hpp"
#include "fn_80142EBC.hpp"
#include "fn_8016E258.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016D8A8.hpp"
#include "fn_8016E7C4.hpp"
#include "fn_8016DD88.hpp"
#include "fn_80142EBC.hpp"
#include "fn_8016E258.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8016E77C.hpp"
#include "fn_8016DD40.hpp"
#include "fn_80142260.hpp"
#include "fn_801426C0.hpp"
#include "fn_80142C84.hpp"
#include "fn_80142260.hpp"
#include "fn_801426C0.hpp"
#include "fn_8016E77C.hpp"
#include "fn_8016DD40.hpp"
#include "fn_80142C84.hpp"
#include "fn_8016E7C4.hpp"
#include "fn_8016DD88.hpp"
#include "fn_8016E578.hpp"



void fn_8016BA1C(PPC::Runtime::GCContext* context)
{
/*8016BA1C 0016881C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016BA20 00168820*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016BA24 00168824*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016BA28 00168828*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016BA2C 0016882C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016BA30 00168830*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016BA34 00168834*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8016BA38 00168838*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016BA3C 0016883C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016BA40 00168840*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016BA44 00168844*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad, context->r30));
/*8016BA48 00168848*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8016BA4C 0016884C*/ PPC::Runtime::ASM::ble(.L_8016BBF0);
/*8016BA50 00168850*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8016BA54 00168854*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad, context->r30));
/*8016BA58 00168858*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad, context->r30));
/*8016BA5C 0016885C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*8016BA60 00168860*/ PPC::Runtime::ASM::bne(.L_8016BB28);
/*8016BA64 00168864*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016BA68 00168868*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r3));
/*8016BA6C 0016886C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016BA70 00168870*/ PPC::Runtime::ASM::beq(.L_8016BBF0);
/*8016BA74 00168874*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016BA78 00168878*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r28));
/*8016BA7C 0016887C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016BA80 00168880*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016BA84 00168884*/ PPC::Runtime::ASM::beq(.L_8016BB08);
/*8016BA88 00168888*/ PPC::Runtime::ASM::bge(.L_8016BA98);
/*8016BA8C 0016888C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016BA90 00168890*/ PPC::Runtime::ASM::bge(.L_8016BAA4);
/*8016BA94 00168894*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BA98, 0x8016BA98) //this is a jump label
/*8016BA98 00168898*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8016BA9C 0016889C*/ PPC::Runtime::ASM::bge(.L_8016BBF0);
/*8016BAA0 001688A0*/ PPC::Runtime::ASM::b(.L_8016BB1C);
RUNTIME_PPC_JUMP_LABEL(.L_8016BAA4, 0x8016BAA4) //this is a jump label
/*8016BAA4 001688A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BAA8 001688A8*/ PPC::Runtime::ASM::li(context->r0, 0x46);
/*8016BAAC 001688AC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r28));
/*8016BAB0 001688B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BAB4 001688B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r28));
/*8016BAB8 001688B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8016BABC 001688BC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016BAC0 001688C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8016BAC4 001688C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BAC8 001688C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016BACC 001688CC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016BAD0 001688D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8016BAD4 001688D4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016BAD8 001688D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016BADC 001688DC*/ PPC::Runtime::ASM::bl(fn_8016D8A8);
/*8016BAE0 001688E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016BAE4 001688E4*/ PPC::Runtime::ASM::bl(fn_8016E7C4);
/*8016BAE8 001688E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016BAEC 001688EC*/ PPC::Runtime::ASM::bl(fn_8016DD88);
/*8016BAF0 001688F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016BAF4 001688F4*/ PPC::Runtime::ASM::bl(fn_80142EBC);
/*8016BAF8 001688F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*8016BAFC 001688FC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016BB00 00168900*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8016BB04 00168904*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BB08, 0x8016BB08) //this is a jump label
/*8016BB08 00168908*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BB0C 0016890C*/ PPC::Runtime::ASM::li(context->r0, 0x16);
/*8016BB10 00168910*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r28));
/*8016BB14 00168914*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r28));
/*8016BB18 00168918*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BB1C, 0x8016BB1C) //this is a jump label
/*8016BB1C 0016891C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016BB20 00168920*/ PPC::Runtime::ASM::bl(fn_8016E258);
/*8016BB24 00168924*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BB28, 0x8016BB28) //this is a jump label
/*8016BB28 00168928*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8016BB2C 0016892C*/ PPC::Runtime::ASM::bgt(.L_8016BBF0);
/*8016BB30 00168930*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016BB34 00168934*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r3));
/*8016BB38 00168938*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016BB3C 0016893C*/ PPC::Runtime::ASM::beq(.L_8016BBF0);
/*8016BB40 00168940*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016BB44 00168944*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa7, context->r28));
/*8016BB48 00168948*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016BB4C 0016894C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016BB50 00168950*/ PPC::Runtime::ASM::beq(.L_8016BBD4);
/*8016BB54 00168954*/ PPC::Runtime::ASM::bge(.L_8016BB64);
/*8016BB58 00168958*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016BB5C 0016895C*/ PPC::Runtime::ASM::bge(.L_8016BB70);
/*8016BB60 00168960*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BB64, 0x8016BB64) //this is a jump label
/*8016BB64 00168964*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8016BB68 00168968*/ PPC::Runtime::ASM::bge(.L_8016BBF0);
/*8016BB6C 0016896C*/ PPC::Runtime::ASM::b(.L_8016BBE8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BB70, 0x8016BB70) //this is a jump label
/*8016BB70 00168970*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BB74 00168974*/ PPC::Runtime::ASM::li(context->r0, 0x46);
/*8016BB78 00168978*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5, context->r28));
/*8016BB7C 0016897C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BB80 00168980*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa6, context->r28));
/*8016BB84 00168984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*8016BB88 00168988*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016BB8C 0016898C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*8016BB90 00168990*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BB94 00168994*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016BB98 00168998*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016BB9C 0016899C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*8016BBA0 001689A0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016BBA4 001689A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BBA8 001689A8*/ PPC::Runtime::ASM::bl(fn_8016D8A8);
/*8016BBAC 001689AC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BBB0 001689B0*/ PPC::Runtime::ASM::bl(fn_8016E7C4);
/*8016BBB4 001689B4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BBB8 001689B8*/ PPC::Runtime::ASM::bl(fn_8016DD88);
/*8016BBBC 001689BC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BBC0 001689C0*/ PPC::Runtime::ASM::bl(fn_80142EBC);
/*8016BBC4 001689C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*8016BBC8 001689C8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016BBCC 001689CC*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8016BBD0 001689D0*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BBD4, 0x8016BBD4) //this is a jump label
/*8016BBD4 001689D4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BBD8 001689D8*/ PPC::Runtime::ASM::li(context->r0, 0x16);
/*8016BBDC 001689DC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5, context->r28));
/*8016BBE0 001689E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa6, context->r28));
/*8016BBE4 001689E4*/ PPC::Runtime::ASM::b(.L_8016BBF0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BBE8, 0x8016BBE8) //this is a jump label
/*8016BBE8 001689E8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8016BBEC 001689EC*/ PPC::Runtime::ASM::bl(fn_8016E258);
RUNTIME_PPC_JUMP_LABEL(.L_8016BBF0, 0x8016BBF0) //this is a jump label
/*8016BBF0 001689F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8016BBF4 001689F4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8016BBF8 001689F8*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8016BBFC 001689FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8016BC00, 0x8016BC00) //this is a jump label
/*8016BC00 00168A00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8016BC04 00168A04*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x30);
/*8016BC08 00168A08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016BC0C 00168A0C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016BC10 00168A10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8016BC14 00168A14*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x3c);
/*8016BC18 00168A18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016BC1C 00168A1C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016BC20 00168A20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8016BC24 00168A24*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0x24);
/*8016BC28 00168A28*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016BC2C 00168A2C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8016BC30 00168A30*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8016BC34 00168A34*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x50);
/*8016BC38 00168A38*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x2);
/*8016BC3C 00168A3C*/ PPC::Runtime::ASM::blt(.L_8016BC00);
/*8016BC40 00168A40*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8016BC44 00168A44*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8016BC48, 0x8016BC48) //this is a jump label
/*8016BC48 00168A48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r31));
/*8016BC4C 00168A4C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016BC50 00168A50*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016BC54 00168A54*/ PPC::Runtime::ASM::beq(.L_8016BE64);
/*8016BC58 00168A58*/ PPC::Runtime::ASM::bge(.L_8016BEA8);
/*8016BC5C 00168A5C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016BC60 00168A60*/ PPC::Runtime::ASM::bge(.L_8016BC6C);
/*8016BC64 00168A64*/ PPC::Runtime::ASM::b(.L_8016BEA8);
/*8016BC68 00168A68*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BC6C, 0x8016BC6C) //this is a jump label
/*8016BC6C 00168A6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016BC70 00168A70*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016BC74 00168A74*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8016BC78 00168A78*/ PPC::Runtime::ASM::beq(.L_8016BD78);
/*8016BC7C 00168A7C*/ PPC::Runtime::ASM::bge(.L_8016BC90);
/*8016BC80 00168A80*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016BC84 00168A84*/ PPC::Runtime::ASM::beq(.L_8016BEA8);
/*8016BC88 00168A88*/ PPC::Runtime::ASM::bge(.L_8016BC9C);
/*8016BC8C 00168A8C*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BC90, 0x8016BC90) //this is a jump label
/*8016BC90 00168A90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8016BC94 00168A94*/ PPC::Runtime::ASM::bge(.L_8016BEA8);
/*8016BC98 00168A98*/ PPC::Runtime::ASM::b(.L_8016BE20);
RUNTIME_PPC_JUMP_LABEL(.L_8016BC9C, 0x8016BC9C) //this is a jump label
/*8016BC9C 00168A9C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BCA0 00168AA0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8016BCA4 00168AA4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BCA8 00168AA8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BCAC 00168AAC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8016BCB0 00168AB0*/ PPC::Runtime::ASM::bgt(.L_8016BCC0);
/*8016BCB4 00168AB4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016BCB8 00168AB8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016BCBC 00168ABC*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BCC0, 0x8016BCC0) //this is a jump label
/*8016BCC0 00168AC0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8016BCC4 00168AC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1e);
/*8016BCC8 00168AC8*/ PPC::Runtime::ASM::bne(.L_8016BCD8);
/*8016BCCC 00168ACC*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BCD0 00168AD0*/ PPC::Runtime::ASM::bl(fn_8016E77C);
/*8016BCD4 00168AD4*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BCD8, 0x8016BCD8) //this is a jump label
/*8016BCD8 00168AD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x14);
/*8016BCDC 00168ADC*/ PPC::Runtime::ASM::bne(.L_8016BCFC);
/*8016BCE0 00168AE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016BCE4 00168AE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BCE8 00168AE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016BCEC 00168AEC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016BCF0 00168AF0*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BCF4 00168AF4*/ PPC::Runtime::ASM::bl(fn_8016DD40);
/*8016BCF8 00168AF8*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BCFC, 0x8016BCFC) //this is a jump label
/*8016BCFC 00168AFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x28);
/*8016BD00 00168B00*/ PPC::Runtime::ASM::bne(.L_8016BD48);
/*8016BD04 00168B04*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
/*8016BD08 00168B08*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016BD0C 00168B0C*/ PPC::Runtime::ASM::bne(.L_8016BD30);
/*8016BD10 00168B10*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8016BD14 00168B14*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BD18 00168B18*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*8016BD1C 00168B1C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8016BD20 00168B20*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a, context->r31));
/*8016BD24 00168B24*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8016BD28 00168B28*/ PPC::Runtime::ASM::bl(fn_80142260);
/*8016BD2C 00168B2C*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BD30, 0x8016BD30) //this is a jump label
/*8016BD30 00168B30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8016BD34 00168B34*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BD38 00168B38*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8016BD3C 00168B3C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8016BD40 00168B40*/ PPC::Runtime::ASM::bl(fn_801426C0);
/*8016BD44 00168B44*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BD48, 0x8016BD48) //this is a jump label
/*8016BD48 00168B48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*8016BD4C 00168B4C*/ PPC::Runtime::ASM::bne(.L_8016BEA8);
/*8016BD50 00168B50*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8016BD54 00168B54*/ PPC::Runtime::ASM::extsb.(context->r0, context->r5);
/*8016BD58 00168B58*/ PPC::Runtime::ASM::ble(.L_8016BEA8);
/*8016BD5C 00168B5C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BD60 00168B60*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8016BD64 00168B64*/ PPC::Runtime::ASM::bl(fn_80142C84);
/*8016BD68 00168B68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016BD6C 00168B6C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016BD70 00168B70*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8016BD74 00168B74*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BD78, 0x8016BD78) //this is a jump label
/*8016BD78 00168B78*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BD7C 00168B7C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8016BD80 00168B80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BD84 00168B84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BD88 00168B88*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016BD8C 00168B8C*/ PPC::Runtime::ASM::bgt(.L_8016BEA8);
/*8016BD90 00168B90*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016BD94 00168B94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016BD98 00168B98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
/*8016BD9C 00168B9C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016BDA0 00168BA0*/ PPC::Runtime::ASM::bne(.L_8016BDC4);
/*8016BDA4 00168BA4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8016BDA8 00168BA8*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BDAC 00168BAC*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r31));
/*8016BDB0 00168BB0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8016BDB4 00168BB4*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a, context->r31));
/*8016BDB8 00168BB8*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8016BDBC 00168BBC*/ PPC::Runtime::ASM::bl(fn_80142260);
/*8016BDC0 00168BC0*/ PPC::Runtime::ASM::b(.L_8016BDD8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BDC4, 0x8016BDC4) //this is a jump label
/*8016BDC4 00168BC4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8016BDC8 00168BC8*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BDCC 00168BCC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8016BDD0 00168BD0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8016BDD4 00168BD4*/ PPC::Runtime::ASM::bl(fn_801426C0);
RUNTIME_PPC_JUMP_LABEL(.L_8016BDD8, 0x8016BDD8) //this is a jump label
/*8016BDD8 00168BD8*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BDDC 00168BDC*/ PPC::Runtime::ASM::bl(fn_8016E77C);
/*8016BDE0 00168BE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016BDE4 00168BE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BDE8 00168BE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016BDEC 00168BEC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016BDF0 00168BF0*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BDF4 00168BF4*/ PPC::Runtime::ASM::bl(fn_8016DD40);
/*8016BDF8 00168BF8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8016BDFC 00168BFC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r5);
/*8016BE00 00168C00*/ PPC::Runtime::ASM::ble(.L_8016BEA8);
/*8016BE04 00168C04*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BE08 00168C08*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8016BE0C 00168C0C*/ PPC::Runtime::ASM::bl(fn_80142C84);
/*8016BE10 00168C10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016BE14 00168C14*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016BE18 00168C18*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8016BE1C 00168C1C*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BE20, 0x8016BE20) //this is a jump label
/*8016BE20 00168C20*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BE24 00168C24*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8016BE28 00168C28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BE2C 00168C2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BE30 00168C30*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016BE34 00168C34*/ PPC::Runtime::ASM::bgt(.L_8016BEA8);
/*8016BE38 00168C38*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016BE3C 00168C3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016BE40 00168C40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016BE44 00168C44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016BE48 00168C48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016BE4C 00168C4C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016BE50 00168C50*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BE54 00168C54*/ PPC::Runtime::ASM::bl(fn_8016E7C4);
/*8016BE58 00168C58*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BE5C 00168C5C*/ PPC::Runtime::ASM::bl(fn_8016DD88);
/*8016BE60 00168C60*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BE64, 0x8016BE64) //this is a jump label
/*8016BE64 00168C64*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016BE68 00168C68*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016BE6C 00168C6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016BE70 00168C70*/ PPC::Runtime::ASM::beq(.L_8016BE80);
/*8016BE74 00168C74*/ PPC::Runtime::ASM::bge(.L_8016BEA8);
/*8016BE78 00168C78*/ PPC::Runtime::ASM::b(.L_8016BEA8);
/*8016BE7C 00168C7C*/ PPC::Runtime::ASM::b(.L_8016BEA8);
RUNTIME_PPC_JUMP_LABEL(.L_8016BE80, 0x8016BE80) //this is a jump label
/*8016BE80 00168C80*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BE84 00168C84*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8016BE88 00168C88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BE8C 00168C8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016BE90 00168C90*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016BE94 00168C94*/ PPC::Runtime::ASM::bgt(.L_8016BEA8);
/*8016BE98 00168C98*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016BE9C 00168C9C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*8016BEA0 00168CA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016BEA4 00168CA4*/ PPC::Runtime::ASM::bl(fn_8016E578);
RUNTIME_PPC_JUMP_LABEL(.L_8016BEA8, 0x8016BEA8) //this is a jump label
/*8016BEA8 00168CA8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016BEAC 00168CAC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x50);
/*8016BEB0 00168CB0*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8016BEB4 00168CB4*/ PPC::Runtime::ASM::blt(.L_8016BC48);
/*8016BEB8 00168CB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016BEBC 00168CBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016BEC0 00168CC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016BEC4 00168CC4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016BEC8 00168CC8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016BECC 00168CCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016BED0 00168CD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016BED4 00168CD4*/ PPC::Runtime::ASM::blr();
}